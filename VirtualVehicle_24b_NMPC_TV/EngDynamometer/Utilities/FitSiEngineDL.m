function [neuralODE,airflowerror,torqueerror,maperror,egterror,EngineType]=FitSiEngineDL(varargin)

    % Function fits a Deep Learning model to measured data or data from SiDynamometer
    %
    %
    % Copyright 2016-2022 The MathWorks, Inc.
    
    %Check available licenses
    if ~(dig.isProductInstalled('Deep Learning Toolbox')&&dig.isProductInstalled('Statistics and Machine Learning Toolbox')&&license('test','neural_network_toolbox')&&license('test','statistics_toolbox'))
        errordlg('Statistics and Machine Learning Toolbox and Deep Learning Toolbox install and license are required for Deep Learning Engine Model Generation','Toolbox Support')
    end
    
    options=struct;
    
    % Overall, among all the data available, 50% is used for training, 20%
    % is used for validation (for eary stopping), and the remaining 30% is
    % used for testing. This can be adjusted as needed.
    options.Validation_data_pct = 0.08333;
    
    % There are about 800 iterations per epoch. Validation Frequence is
    % based on the number of iterations.
    options.ValidationFrequency = 2400; % validate once every x iterations
    options.ValidationPatience = 5; % how many validation loss increases before terminate the training
    
    %Pre-processing options
    options.dataPreProcessingOptions.smoothData=true;
    options.dataPreProcessingOptions.smoothingWindowSize=10;
    options.dataPreProcessingOptions.downsampleData=true;
    options.dataPreProcessingOptions.downsampleRatio=1;
    options.dataPreProcessingOptions.standardizeData=true;
    options.dataPreProcessingOptions.addDithering=false;
    options.dataPreProcessingOptions.ditheringNoiseLevel=0.001;
    
    options.useAugmentation=true;
    options.augmentationSize=5;
    
    % options for the NARX-like model
    options.useTappedDelay=false;
    options.inputDelays=1:4;
    options.outputDelays=[];
    
    % Optimizer options
    options.initialLearnRate=0.01;
    options.learnRateDropFactor=0.99;
    options.learnRateDropPeriod=1;
    
    %Gradient options
    options.l2Regularization = 0.0001;
    options.gradientThresholdMethod = "global-l2norm";% mustBeMember(gradientThresholdMethod,["global-l2norm","absolute-value"])
    options.gradientThreshold = 2;
    
    % Specify training epochs and mini batch size
    options.miniBatchSize=128;
    options.maxEpochs=80;
    
    % time limit for training
    options.timeLimit=12*3600; % seconds
    
    % create and initialize deep learning network
    options.hiddenUnits=100;
    options.numFullyConnectedLayers=3;
    options.actfunName="sigmoid";
    
    if isa(varargin{1},'table')&&(nargin==4)
    
        VVmode=true;
    
        EngineDataTable=varargin{1};
        maxEpochs=varargin{2};
        downsampleRatio=varargin{3};
        fparent=varargin{4};
    
    else %Produce data using dynamometer
    
        VVmode=false;

        maxEpochs=options.maxEpochs;

        fparent={[]};

        %Set emphasis on steady-state fit quality (1=twice the emphasis on
        %steady-state than transient, 2=triple the emphasis on steady-state than
        %transient

        SteadyStateLossMult=1;

        options.dataPreProcessingOptions.downsampleRatio=10;

        downsampleRatio=options.dataPreProcessingOptions.downsampleRatio;
    
        if nargin==1 %User provides model from which to gather data
        
            ModelName=varargin{1};
        
            wbhandle=waitbar(0,'Generating Design of Experiments...');

            %Determine if GT is being used
            try
                UseGTPlant=evalin('base','UseGTPlant');
            catch
                UseGTPlant=false;
            end
        
            [EngInputs,EngOutputs,Ts]=ExecuteDoE(ModelName,UseGTPlant,SteadyStateLossMult);
    
            Throttle=EngInputs(:,1);
            Wastegate=EngInputs(:,2);
            Speed=EngInputs(:,3);
            IntCamPhs=EngInputs(:,4);
            ExhCamPhs=EngInputs(:,5);
            SpkDelta=EngInputs(:,6);
            Lambda=EngInputs(:,7);
                
            AirMassFlw=EngOutputs(:,1);
            Torque=EngOutputs(:,2);
            MAP=EngOutputs(:,3);
            ExhTemp=EngOutputs(:,4);
                
            WeightFactor=EngOutputs(:,end);
                
            EngineDataTable=table(Speed,Throttle,Wastegate,IntCamPhs,ExhCamPhs,SpkDelta,Lambda,Torque,MAP,ExhTemp,AirMassFlw,WeightFactor);
            EngineDataTable.Properties.VariableUnits={'rev/min','%','%','degCrkAdv','degCrkRet','degCrk','-','N*m','Pa','K','kg/s','-'};
            EngineDataTable.Properties.UserData=struct('Ts',Ts);
    
        
            if UseGTPlant
        
                save GTDoEData EngInputs EngOutputs Ts
        
                        
                save GTDoETable EngineDataTable
                
                % DownsampleRatio=20;
                % EngineDataTable=downsample(EngineDataTable,DownsampleRatio);
                % EngineDataTable.Properties.UserData=struct('Ts',Ts*DownsampleRatio);
                % 
                % save VVCGTDoELoResTable EngineDataTable
                
            end
        
            % options related to ODE integration
            options.Ts=Ts;
        
    
        else
           error(getString(message('autoblks:autoblkErrorMsg:errInvNInp')));  %RLR
        end
    
    end
    
    %Set up Deep Learning data
    
    DataSetChecked=false;
    
    %Translate transient data into a form useable by existing DL functionality
    if isfield(EngineDataTable.Properties.UserData,'Ts')
        Ts=EngineDataTable.Properties.UserData.Ts;
    else
        errordlg('Engine dataset must contain Ts sampling time in table UserData');
        DataSetChecked=false;
    end
    
    if isempty(setdiff({'Speed','Throttle','Wastegate','IntCamPhs','ExhCamPhs','SpkDelta','Lambda','Torque','MAP','ExhTemp','AirMassFlw','WeightFactor'},EngineDataTable.Properties.VariableNames))&&...
            isempty(setdiff({'rev/min','%','%','degCrkAdv','degCrkRet','degCrk','-','N*m','Pa','K','kg/s','-'},EngineDataTable.Properties.VariableUnits))
    
        %Turbo DIVCP application
        EngInputs=[EngineDataTable.Throttle EngineDataTable.Wastegate EngineDataTable.Speed EngineDataTable.IntCamPhs EngineDataTable.ExhCamPhs EngineDataTable.SpkDelta EngineDataTable.Lambda];
        EngOutputs=[EngineDataTable.AirMassFlw EngineDataTable.Torque EngineDataTable.MAP EngineDataTable.ExhTemp EngineDataTable.WeightFactor];
    
        EngineType=1:7;
    
        DataSetChecked=true;
    
    elseif isempty(setdiff({'Speed','Throttle','IntCamPhs','ExhCamPhs','SpkDelta','Lambda','Torque','MAP','ExhTemp','AirMassFlw','WeightFactor'},EngineDataTable.Properties.VariableNames))&&...
            isempty(setdiff({'rev/min','%','degCrkAdv','degCrkRet','degCrk','-','N*m','Pa','K','kg/s','-'},EngineDataTable.Properties.VariableUnits))
    
        %Naturally Aspirated DIVCP application
    
        EngInputs=[EngineDataTable.Throttle EngineDataTable.Speed EngineDataTable.IntCamPhs EngineDataTable.ExhCamPhs EngineDataTable.SpkDelta EngineDataTable.Lambda];
        EngOutputs=[EngineDataTable.AirMassFlw EngineDataTable.Torque EngineDataTable.MAP EngineDataTable.ExhTemp EngineDataTable.WeightFactor];
    
        EngineType=setdiff(1:7,2);
    
        DataSetChecked=true;
    
    elseif isempty(setdiff({'Speed','Throttle','IntCamPhs','SpkDelta','Lambda','Torque','MAP','ExhTemp','AirMassFlw','WeightFactor'},EngineDataTable.Properties.VariableNames))&&...
            isempty(setdiff({'rev/min','%','degCrkAdv','degCrk','-','N*m','Pa','K','kg/s','-'},EngineDataTable.Properties.VariableUnits))
    
        %Naturally Aspirated ICP-only application
    
        EngInputs=[EngineDataTable.Throttle EngineDataTable.Speed EngineDataTable.IntCamPhs EngineDataTable.SpkDelta EngineDataTable.Lambda];
        EngOutputs=[EngineDataTable.AirMassFlw EngineDataTable.Torque EngineDataTable.MAP EngineDataTable.ExhTemp EngineDataTable.WeightFactor];
    
        EngineType=setdiff(1:7,[2 5]);
    
        DataSetChecked=true;
    
    elseif isempty(setdiff({'Speed','Throttle','SpkDelta','Lambda','Torque','MAP','ExhTemp','AirMassFlw','WeightFactor'},EngineDataTable.Properties.VariableNames))&&...
            isempty(setdiff({'rev/min','%','degCrk','-','N*m','Pa','K','kg/s','-'},EngineDataTable.Properties.VariableUnits))
    
        %Naturally Aspirated no cam-phaser application
    
        EngInputs=[EngineDataTable.Throttle EngineDataTable.Speed EngineDataTable.SpkDelta EngineDataTable.Lambda];
        EngOutputs=[EngineDataTable.AirMassFlw EngineDataTable.Torque EngineDataTable.MAP EngineDataTable.ExhTemp EngineDataTable.WeightFactor];
    
        EngineType=setdiff(1:7,[2 4 5]);
    
        DataSetChecked=true;
    
    elseif isempty(setdiff({'Speed','Throttle','IntCamPhs','ExhCamPhs','Lambda','Torque','MAP','ExhTemp','AirMassFlw','WeightFactor'},EngineDataTable.Properties.VariableNames))&&...
            isempty(setdiff({'rev/min','%','degCrkAdv','degCrkRet','-','N*m','Pa','K','kg/s','-'},EngineDataTable.Properties.VariableUnits))
    
        %Naturally Aspirated DIVCP application at as-calibrated spark
        EngInputs=[EngineDataTable.Throttle EngineDataTable.Speed EngineDataTable.IntCamPhs EngineDataTable.ExhCamPhs EngineDataTable.Lambda];
        EngOutputs=[EngineDataTable.AirMassFlw EngineDataTable.Torque EngineDataTable.MAP EngineDataTable.ExhTemp EngineDataTable.WeightFactor];
    
        EngineType=setdiff(1:7,[2 6]);
    
        DataSetChecked=true;
    
    elseif isempty(setdiff({'Speed','Throttle','IntCamPhs','ExhCamPhs','Torque','MAP','ExhTemp','AirMassFlw','WeightFactor'},EngineDataTable.Properties.VariableNames))&&...
            isempty(setdiff({'rev/min','%','degCrkAdv','degCrkRet','N*m','Pa','K','kg/s','-'},EngineDataTable.Properties.VariableUnits))
    
        %Naturally Aspirated DIVCP application at as-calibrated spark and  Lambda
    
        EngInputs=[EngineDataTable.Throttle EngineDataTable.Speed EngineDataTable.IntCamPhs EngineDataTable.ExhCamPhs];
        EngOutputs=[EngineDataTable.AirMassFlw EngineDataTable.Torque EngineDataTable.MAP EngineDataTable.ExhTemp EngineDataTable.WeightFactor];
    
        EngineType=setdiff(1:7,[2 6 7]);
    
        DataSetChecked=true;
    
    elseif isempty(setdiff({'Speed','Throttle','Torque','MAP','ExhTemp','AirMassFlw','WeightFactor'},EngineDataTable.Properties.VariableNames))&&...
            isempty(setdiff({'rev/min','%','N*m','Pa','K','kg/s','-'},EngineDataTable.Properties.VariableUnits))
    
        %Naturally Aspirated no cam-phaser application at as-calibrated spark and Lambda
    
        EngInputs=[EngineDataTable.Throttle EngineDataTable.Speed];
        EngOutputs=[EngineDataTable.AirMassFlw EngineDataTable.Torque EngineDataTable.MAP EngineDataTable.ExhTemp EngineDataTable.WeightFactor];
    
        EngineType=setdiff(1:7,[2 4 5 6 7]);
    
        DataSetChecked=true;
    
    elseif isempty(setdiff({'Speed','Throttle','IntCamPhs','Torque','MAP','ExhTemp','AirMassFlw','WeightFactor'},EngineDataTable.Properties.VariableNames))&&...
            isempty(setdiff({'rev/min','%','degCrkAdv','N*m','Pa','K','kg/s','-'},EngineDataTable.Properties.VariableUnits))
    
        %Naturally Aspirated intake phaser application at MBT spark and as-calibrated Lambda
    
        EngInputs=[EngineDataTable.Throttle EngineDataTable.Speed EngineDataTable.IntCamPhs];
        EngOutputs=[EngineDataTable.AirMassFlw EngineDataTable.Torque EngineDataTable.MAP EngineDataTable.ExhTemp EngineDataTable.WeightFactor];
    
        EngineType=setdiff(1:7,[2 5 6 7]);
    
        DataSetChecked=true;
    
    else
        errordlg('Engine dataset must contain compatible data names and units');
        DataSetChecked=false;
    end

    if DataSetChecked
        options.maxEpochs=maxEpochs;
        options.dataPreProcessingOptions.downsampleRatio=downsampleRatio;
        options.Ts=Ts;
        options.dataPreProcessingOptions.downsampleData=true;
    
        if ~VVmode
           waitbar(0.5,wbhandle,'Training Deep Learning engine model...')
        end

        neuralODE=autoblkssidlfit(EngInputs,EngOutputs,options,fparent{1});

        if ~isempty(neuralODE)
    
            %Set engine shutdown initial condition definition
            neuralODE.data.Y0=([0. 0. 101325. 293.15]'-neuralODE.data.muY')./neuralODE.data.sigY';
    
            %Plot DoE
            PlotDoE(EngineDataTable,EngineType,options.Validation_data_pct);
    
            %Plot Validation
            [~,~,~,airflowerror,torqueerror,maperror,egterror]=ValidateODENN(EngInputs,EngOutputs,Ts,EngineType,neuralODE,options,fparent);
    
            %Set up calibration parameters of DL model for export to Simulink
            neuralODETmp=neuralODE;
            neuralODE=rmfield(neuralODE,'dlmodel');  %Temporarily remove dlmodel NN object from Simulink export
    
            %Get SI Core Engine physical parameters shared with DL engine model
            if ~VVmode
            
                waitbar(0.9,wbhandle,'Performance-testing Deep Learning engine model...')
            
                %Load Si Engine data dictionaries
                dd2load = {'SiDLEngine.sldd';...
                    'SiEngineCore.sldd';...
                    'SiEngine.sldd'};
            
                [ddataobjs,ddata]=loaddictionaries(dd2load);
            
                hwsdl=ddataobjs{1};
                hwspc=ddataobjs{2};
                hwsp=ddataobjs{3};
            
                %Common SI Engine and DL Engine model physical plant parameters
                setDdData(hwsdl,'PlntEngSIDLAccPwrTbl',getDdData(hwsp,'PlntEngAccPwrTbl'));
                setDdData(hwsdl,'PlntEngSIDLAccSpdBpt',getDdData(hwsp,'PlntEngAccSpdBpt'));
                setDdData(hwsdl,'PlntEngSIDLAccSpdBpt',getDdData(hwsp,'PlntEngAccSpdBpt'));
                setDdData(hwsdl,'PlntEngSIDLTimeCETC',getDdData(hwsp,'PlntEngTimeCETC'));
            
                %Common SI Engine Core and DL Engine model physical plant parameters
                setDdData(hwsdl,'PlntEngSIDLNCyl',getDdData(hwspc,'PlntEngNCyl'));
                setDdData(hwsdl,'PlntEngSIDLVd',getDdData(hwspc,'PlntEngVd'));
                setDdData(hwsdl,'PlntEngSIDLVd',getDdData(hwspc,'PlntEngVd'));
            
                %Assign trained neuralODE structure to SI DL dictionary
                setDdData(hwsdl,'PlntEngNeuralODE',neuralODE);
            
                %Restore dlmodel object to neuralODE structure in case user wants to use
                %it later
                neuralODE=neuralODETmp;
            
                %Save dictionary changes
                for i=1:length(ddata)
                   ddata{1}.saveChanges    
                end
            
                %Execute engine mapping experiment on Deep Learning Engine Model
                if ~isempty(ModelName)&&~(nargin==2)
                    set_param([ModelName '/Engine System/Engine Plant/Engine'],'LabelModeActiveChoice','SI DL Engine');
                    DynamometerStart([ModelName '/Subsystem1'],'SteadyState');
                end

                close(wbhandle);
    
            end
        else
            airflowerror=[];
            torqueerror=[];
            maperror=[];
            egterror=[];
        end
    else
        neuralODE=[];
    end

end



%DoE plots
function PlotDoE(EngineDataTable,EngineType,Validation_data_pct)

    AllInputNames={'Throttle','Wastegate','Speed','IntCamPhs','ExhCamPhs','SpkDelta','Lambda'};
    
    InputNames=AllInputNames(EngineType);
    
    %Get data table data in the correct column order
    for i=1:length(InputNames)
        [~,IA]=intersect(EngineDataTable.Properties.VariableNames,InputNames{i});
        DataInds(i)=IA;
    end
    
    Data=EngineDataTable.Variables;
    Inputs=Data(:,DataInds);
    
    Type=true(size(Inputs,1),1); %Set train = true
    Type((round(size(Type,1)/2)+1):end)=false; %Set test = false
    
    TrainInputs=Inputs(1:round(size(Inputs,1)/2),:);
    TrainType=Type(1:round(size(Type,1)/2),:);
    
    TestStartIndex = (round(size(Type,1)/2)+1+round(size(Type,1)*Validation_data_pct));
    TestInputs=Inputs(TestStartIndex:end,:);
    TestType=Type(TestStartIndex:end,:);
    
    X=[TrainInputs;TestInputs];
    Type=[TrainType;TestType];
    
    color=lines(2);
    group = categorical(Type,[true false],{'Train','Test'});
    
    h=figure;
    [~,~] = gplotmatrix(X,[],group,color,[],[],[],'variable',InputNames,'o');
    set(h,'Name','Overlay of Test vs Train Steady-State Input Targets','NumberTitle','off', 'WindowStyle', 'Docked');
    title('Overlay of Test vs Train Steady-State Input Targets');

end


%Validation plots
function [usim,ysim,yhatsim,airflowerror,torqueerror,maperror,egterror]=ValidateODENN(EngInputs,EngOutputs,Ts,EngineType,neuralODE,options,fparent)

    muu=neuralODE.data.muU;
    muy=neuralODE.data.muY;
    sigu=neuralODE.data.sigU;
    sigy=neuralODE.data.sigY;
    
    u=EngInputs;
    x=EngOutputs(:,1:end-1); %Remove weights column at end, it is not an output
    
    nrows=round(size(u,1)/2); %reduce resulting 100ms dataset by a factor of 2 - training will be done on the first 1/2th of the dataset
    Validation_data_pct = options.Validation_data_pct;
    TestStartIndex = (nrows+1+round(size(u,1)*Validation_data_pct));
    u=u(TestStartIndex:end,:);
    x=x(TestStartIndex:end,:);
    
    % output is same as states
    y=x;
    
    %Scale the training data
    uscaled=(u-muu)./sigu;
    yscaled=(y-muy)./sigy;
    
    %Set up data for training
    Uscaled=uscaled';
    Yscaled=yscaled';
    
    X=Yscaled;
    
    T=Ts*((1:size(Uscaled,2))-1);
    
    if options.useAugmentation
    
        X0=X(:,1);
        nx=size(X0,1);
    
        % augment states
        Xsim(:,1)=cat(1,X0,zeros(options.augmentationSize,1));
    
    else
    
        Xsim(:,1)=X(:,1);
    
    end
    
    %ODE1 integration
    for i=2:size(Uscaled,2)
    
        uin=Uscaled(:,i);
        xin=Xsim(:,i-1);
        dxdt=odeModel_fcn(uin,xin,neuralODE.model,neuralODE.trainingOptions.actfunName);
        Xsim(:,i)=xin+dxdt*Ts;
    
    end
    
    % Discard augmentation
    if options.useAugmentation
        Xsim(nx+1:end,:)=[];
    end
    
    Ysim=Xsim;
    
    Ysim=Ysim.*repmat(sigy',1,size(Ysim,2));
    
    yhatsim=(Ysim+repmat(muy',1,size(Ysim,2)))';
    
    ysim=y;
    usim=u;
    tsim=T;
    
    h1=figure;
    
    AllInputNames={'Throttle','Wastegate','Speed','IntCamPhs','ExhCamPhs','SpkDelta','Lambda'};
    AllLabelNames={'Throttle Position (%)','Wastegate Area (%)','Engine Speed (RPM)','Intake Cam Phase (deg)','Exhaust Cam Phase (deg)','Spark Delta (deg)','Lambda (-)'};
    InputNames=AllInputNames(EngineType);
    InputLabelNames=AllLabelNames(EngineType);
    
    set(h1,'NumberTitle','off', 'WindowStyle', 'Docked');
    
    title('Engine Inputs and Outputs');
    
    for i=1:min(length(InputNames),4)
        ax1(i)=subplot(min(length(InputNames),4),1,i);
        plot(tsim,usim(:,i));
        grid on
        ylabel(InputLabelNames{i});
    end
    
    linkaxes(ax1,'x');
    
    if length(InputNames)<=4
        set(h1,'Name','Test Inputs');
    else
        set(h1,'Name','Test Inputs 1-4');
        h2=figure;
        set(h2,'NumberTitle','off', 'WindowStyle', 'Docked');
        for i=i+1:length(InputNames)
            ax2(i-4)=subplot(length(InputNames)-4,1,i-4);
            plot(tsim,usim(:,i));
            grid on
            ylabel(InputLabelNames{i});
        end
        linkaxes(ax2,'x');
        set(h2,'Name',['Test Inputs 5-' num2str(length(InputNames))]);
    end
    
    h3=figure;
    set(h3,'Name','Test Responses','NumberTitle','off', 'WindowStyle', 'Docked');
    ax3(1)=subplot(4,1,1);
    plot(tsim,[ysim(:,1) yhatsim(:,1)]);
    grid on
    ylabel('Airflow (kg/s)');
    
    ax3(2)=subplot(4,1,2);
    plot(tsim,[ysim(:,2) yhatsim(:,2)]);
    grid on
    ylabel('Torque (Nm)');
    
    ax3(3)=subplot(4,1,3);
    plot(tsim,[ysim(:,3) yhatsim(:,3)]);
    grid on
    ylabel('Intake Manifold Pressure (Pa)');
    
    ax3(4)=subplot(4,1,4);
    plot(tsim,[ysim(:,4) yhatsim(:,4)]);
    grid on
    ylabel('Exhaust Gas Temperature (K)');
    xlabel('Time (sec)');
    
    linkaxes(ax3,'x');
    
    %Plot error distribution for dynamic responses
    
    h4=figure;
    set(h4,'Name','Model Test Results','NumberTitle','off', 'WindowStyle', 'Docked');
    subplot(2,2,1)
    airflowerror=100*(yhatsim(:,1)-ysim(:,1))./ysim(:,1);
    histogram(airflowerror,100,'BinLimits',[-20,20]);
    grid on
    xlabel('Airflow Error Under Dynamic Conditions (%)');
    ylabel('Samples');
    
    subplot(2,2,2)
    torqueerror=100*(yhatsim(:,2)-ysim(:,2))./ysim(:,2);
    histogram(torqueerror,100,'BinLimits',[-20,20]);
    grid on
    xlabel('Torque Error Under Dynamic Conditions (%)');
    ylabel('Samples');
    
    subplot(2,2,3)
    maperror=100*(yhatsim(:,3)-ysim(:,3))./ysim(:,3);
    histogram(maperror,100,'BinLimits',[-20,20]);
    grid on
    xlabel('Intake Manifold Pressure Error Under Dynamic Conditions (%)');
    ylabel('Samples');
    
    subplot(2,2,4)
    egterror=100*(yhatsim(:,4)-ysim(:,4))./ysim(:,4);
    histogram(egterror,100,'BinLimits',[-20,20]);
    grid on
    xlabel('Exhaust Gas Temperature Error Under Dynamic Conditions (K)');
    ylabel('Samples');

end


function y=odeModel_fcn(u,x,params,actFun)

    % calculate outputs for each time point (y is a vector of values)
    dxdt=[x;u];
    
    % activation function
    switch actFun
        case "tanh"
            actfun = @tanh;
        case "sigmoid"
            actfun = @sigmoid;
        otherwise
            error("Other functions will be added later")
    end
    
    % Forward calculation
    tmp = cell(1,params.numFullyConnectedLayers-1);
    % FullyConnectedLayer1 output
    tmp{1} = actfun(params.("fc"+1).Weights*dxdt + params.("fc"+1).Bias);
    % intermediate FullyConnectedLayer
    for k = 2:params.numFullyConnectedLayers-1
        % FC layer output and activation function
        tmp{k} = actfun(params.("fc"+k).Weights*tmp{k-1} + params.("fc"+k).Bias);
    end
    % last FullyConnectedLayer output
    y = params.("fc"+params.numFullyConnectedLayers).Weights*tmp{params.numFullyConnectedLayers-1} + params.("fc"+params.numFullyConnectedLayers).Bias;

end

function y = sigmoid(x)
    y = 1./(1+exp(-x));
end

function [EngInputs,EngOutputs,Ts]=ExecuteDoE(ModelName,UseGTPlant,SteadyStateLossMult)   
    % Generate engine test data via DoE for training and test set
    OpenLoopMaxMAP=2.25e5;
    
    Ts=0.01;
    
    %Train Points
    NumPoints=250;
    lb=[500 0 99 0 0 -10 0.7];
    ub=[1500 5 100 50 50 0 1];
    v1=GenDoE(NumPoints,lb,ub);
    
    NumPoints=650;
    lb=[500 0 0 0 0 -10 0.7];
    ub=[6500 100 100 50 50 0 1];
    v2=GenDoE(NumPoints,lb,ub);
    
    %Validation points
    NumPoints=50;
    lb=[500 0 99 0 0 -10 0.7];
    ub=[1500 5 100 50 50 0 1];
    v3=GenDoE(NumPoints,lb,ub);
    
    NumPoints=100;
    lb=[500 0 0 0 0 -10 0.7];
    ub=[6500 100 100 50 50 0 1];
    v4=GenDoE(NumPoints,lb,ub);
    
    %Test points
    NumPoints=250;
    lb=[500 0 99 0 0 -10 0.7];
    ub=[1500 5 100 50 50 0 1];
    v5=GenDoE(NumPoints,lb,ub);
    
    NumPoints=500;
    lb=[500 0 0 0 0 -10 0.7];
    ub=[6500 100 100 50 50 0 1];
    v6=GenDoE(NumPoints,lb,ub);
    
    v=[v1;v2;v3;v4;v5;v6];
    
    % construct the engine input vectors
    SteadyEngSpdCmdPts=v(:,1)';
    SteadyTpCmdPts=v(:,2)';
    SteadyWAPCmdPts=v(:,3)';
    SteadyIntCamPhsCmdPts=v(:,4)';
    SteadyExhCamPhsCmdPts=v(:,5)';
    SteadySpkDeltaCmdPts=v(:,6)';
    SteadyLambdaCmdPts=v(:,7)';
    
    %Load top model data dictionary to set test parameters
    dd2load = {'EngineDynamometer.sldd'};
    [ddataobjs,ddata]=loaddictionaries(dd2load);
    hmdd=ddataobjs{1};
    
    %Store new test points in model
    setDdData(hmdd,'SiDynoOpenLoopEngSpdCmdPts',SteadyEngSpdCmdPts);
    setDdData(hmdd,'SiDynoOpenLoopTpCmdPts',SteadyTpCmdPts);
    setDdData(hmdd,'SiDynoOpenLoopWAPCmdPts',SteadyWAPCmdPts);
    setDdData(hmdd,'SiDynoOpenLoopIntCamPhsCmdPts',SteadyIntCamPhsCmdPts);
    setDdData(hmdd,'SiDynoOpenLoopExhCamPhsCmdPts',SteadyExhCamPhsCmdPts);
    setDdData(hmdd,'SiDynoOpenLoopSpkDeltaCmdPts',SteadySpkDeltaCmdPts);
    setDdData(hmdd,'SiDynoOpenLoopLambdaCmdPts',SteadyLambdaCmdPts);
    setDdData(hmdd,'SiDynoOpenLoopMaxMAP',OpenLoopMaxMAP);
    
    %Save top model data dictionary
    ddata{1}.saveChanges    
    
    DynoCtrlBlk=[ModelName,'/Dynamometer Control'];
    set_param(DynoCtrlBlk,'OverrideUsingVariant','OpenLoop');
    
    OrigStopTime=get_param(ModelName,'StopTime');
    
    %Change StopTime and turn on Signal Logging
    ddobj = Simulink.data.dictionary.open('VirtualDynoConfig.sldd');
    ddsecobj = getSection(ddobj,'Configurations');
    entryobj = getEntry(ddsecobj,'EngDynoVariable');
    configobj = getValue(entryobj);
    
    set_param(configobj,'StopTime','300000');
    
    set_param(configobj,'SignalLogging','on');
    setValue(entryobj,configobj);
    saveChanges(ddobj);
    
    
    StopFcn=get_param([ModelName '/Performance Monitor'],'StopFcn');
    set_param([ModelName '/Performance Monitor'],'StopFcn','');
    
    %Set up logging
    Block=[ModelName '/Performance Monitor/Dynamic Logging/LogData'];
    ph=get_param(Block,'porthandles');
    lh=get_param(ph.Outport,'Line');
    set_param(lh,'Name','DynMeasurements');
    set_param(ph.Outport,'DataLogging','on');
    set_param(ph.Outport,'DataLoggingSampleTime',num2str(Ts));
    
    %Turn on signal logging for throttle upstream pressure
    if UseGTPlant
        ThrottleBlockName=[ModelName '/Engine System/Engine Plant/Engine/SiEngine/GT Turbo 1.5L SI DIVCP Engine Model/Gain8'];
        Porthandles=get_param(ThrottleBlockName,'Porthandles');
        Outporthandles=Porthandles.Outport;
        set_param(Outporthandles(1),'DataLogging','on');
    end
    
    %Turn on signal logging for lambda command
    LambdaCommandBlockName=[ModelName '/Dynamometer Control/Open Loop/LambdaCmd Filter'];
    Porthandles=get_param(LambdaCommandBlockName,'Porthandles');
    Outporthandles=Porthandles.Outport;
    set_param(Outporthandles(1),'DataLogging','on');
    
    %Turn on signal logging for commanded spark delta command
    SpkDeltaCommandBlockName=[ModelName '/Dynamometer Control/Open Loop/SpkDeltaCmd Filter'];
    Porthandles=get_param(SpkDeltaCommandBlockName,'Porthandles');
    Outporthandles=Porthandles.Outport;
    set_param(Outporthandles(1),'DataLogging','on');
    
    %Turn on signal logging for wastegate boost limit learning mode
    WAPLearnBlockName=[ModelName '/Dynamometer Control/Open Loop/Select Operating Point'];
    Porthandles=get_param(WAPLearnBlockName,'Porthandles');
    Outporthandles=Porthandles.Outport;
    set_param(Outporthandles(11),'DataLogging','on');
    
    %Run the DoE test
    out=sim(ModelName,'SignalLogging','on','SignalLoggingName','logsout');
    
    %Find Lambda input measurement
    LambdaCmd=out.logsout.get('LambdaCmd');
    LambdaCmd=LambdaCmd.Values;
    
    %Find throttle upstream pressure measurement
    if ~UseGTPlant
        ThrottleUpstreamPressure=nan*ones(size(LambdaCmd));
    else
        ThrottleUpstreamPressure=out.logsout.get('ThrottleUpstreamPressure');
        ThrottleUpstreamPressure=ThrottleUpstreamPressure.Values;
    end
    
    %Find Spark Delta input measurement
    SpkDeltaCmd=out.logsout.get('SpkDeltaCmd');
    SpkDeltaCmd=SpkDeltaCmd.Values;
    
    %Find wastegate learn state
    WAPLearn=out.logsout.get('WAPLearn');
    WAPLearn=WAPLearn.Values;
    
    
    %clean up figures
    h=findall(0, 'Type', 'figure', 'Tag', 'DynamometerWaitbarFig');
    if ~isempty(h)
        delete(h(1))
    end
    
    h=findall(0, 'Type', 'figure', 'Tag', 'RebuildModelWaitbarFig');
    if ~isempty(h)
        delete(h(1))
    end
    
    %Restore Performance Monitor StopFcn
    set_param([ModelName '/Performance Monitor'],'StopFcn',StopFcn);
    
    %Restore original stop time
    set_param(configobj,'StopTime',OrigStopTime);
    setValue(entryobj,configobj);
    saveChanges(ddobj);
    
    
    %Form input and output arrays
    EngInputNames={'Engine speed (rpm)','Throttle position percent','Wastegate area percent','Injection pulse width (ms)','Spark advance (degCrkAdv)','Intake cam phase command (degCrkAdv)','Exhaust cam phase command (degCrkRet)','Torque command (N*m)'};
    EngInputNames=strrep(strrep(strrep(strrep(strrep(EngInputNames,' ','_'),')','_'),'(','_'),'*','_'),'/','_');
    
    EngOutputNames={'Measured engine torque (N*m)','Intake manifold pressure (kPa)','Fuel mass flow rate (g/s)','Exhaust manifold temperature (C)','Turbocharger shaft speed (rpm)','Intake port mass flow rate (g/s)','Intake manifold temperature (C)','Tailpipe HC emissions (g/s)','Tailpipe CO emissions (g/s)','Tailpipe NOx emissions (g/s)','Tailpipe CO2 emissions (g/s)'};
    EngOutputNames=strrep(strrep(strrep(strrep(strrep(EngOutputNames,' ','_'),')','_'),'(','_'),'*','_'),'/','_');
    
    EngOutputConversionSlopes=[1 1000 0.001 1 1 0.001 1 0.001 0.001 0.001 0.001];
    EngOutputConversionOffsets=[0 0 0 273.15 0 0 273.15 0 0 0 0];
    
    Measurement=out.logsout.find('DynMeasurements');
    time=Measurement.Values.Time__s_.Time;
    
    for i=1:length(EngInputNames)
        EngInputs(:,i)=eval(['Measurement.Values.' EngInputNames{i} '.Data']);
    end
    
    for i=1:length(EngOutputNames)
        EngOutputs(:,i)=eval(['Measurement.Values.' EngOutputNames{i} '.Data'])*EngOutputConversionSlopes(i)+EngOutputConversionOffsets(i);
    end
    
    %Add spark delta and lambda command inputs to the end
    EngInputs(:,end+1)=interp1(SpkDeltaCmd.Time,SpkDeltaCmd.Data,time);
    EngInputs(:,end+1)=interp1(LambdaCmd.Time,LambdaCmd.Data,time);
    
    
    %Add throttle upstream pressure at the end
    if ~UseGTPlant
       EngOutputs(:,end+1)=nan*ones(size(EngOutputs(:,end)));
    else
       EngOutputs(:,end+1)=interp1(ThrottleUpstreamPressure.Time,ThrottleUpstreamPressure.Data,time);
    end
    
    %Add wastegate learn state at the end
    EngOutputs(:,end+1)=(interp1(WAPLearn.Time,double(WAPLearn.Data),time)>0.5);
    
    %Add weights at end
    WAPLearn=EngOutputs(:,13);
    
    w=zeros(size(WAPLearn));
    
    for i=2:size(WAPLearn,1)
    
        w(i,1)=0;
    
        if WAPLearn(i)<WAPLearn(i-1)
            startind=i;
        end
    
        if WAPLearn(i)>WAPLearn(i-1)
            endind=i-1;
            w(startind:endind,1)=1+SteadyStateLossMult*((startind:endind)-startind)/(endind-startind)';
        end
    
    end
    
    EngOutputs(:,end+1)=w;
    
    %Remove data where wastegate learning for boost limits is being conducted
    EngOutputs=EngOutputs(WAPLearn<0.5,:);
    EngInputs=EngInputs(WAPLearn<0.5,:);
    
    %Remove all extra data columns
    EngInputs=EngInputs(:,[2 3 1 6 7 9 10]);
    EngOutputs=EngOutputs(:,[6 1 2 4 end]);

end


function v=GenDoE(NumPoints,lb,ub)

    p=sobolset(size(lb,2));
    DOE.Type='sobol';
    
    %scramble points (randomize it)
    p=scramble(p,'MatousekAffineOwen');
    
    m=net(p,NumPoints); %Extract quasi-random point set
    
    r=ub-lb;
    meanval=(ub+lb)/2.;
    
    % scale sobolset values to physical values
    v=zeros(size(m));
    for k=1:size(m,2)
        v(:,k)=(m(:,k)-0.5)*r(k)+meanval(k);
    end
    
    % put zone center inputs in middle of test
    v=[v(1:NumPoints/2,:);meanval;meanval;v(NumPoints/2+1:end,:)];

end


%Load data dictionaries
function [hsldd,ddobj]=loaddictionaries(dd2load)

    ddobj = cellfun(@(x) Simulink.data.dictionary.open(x),dd2load,"UniformOutput",false);
    hsldd = cellfun(@(x) getSection(x,'Design Data'),ddobj,"UniformOutput",false);

end

%This function gets a specified data value from a specified data dictionary
function entryval = getDdData(ddataobj,dataname)

    ddentry = getEntry(ddataobj,dataname); % Entry object
    entryval = getValue(ddentry); % Entry value (can be Simulink parameter)
    if isa(entryval,'Simulink.Parameter')
        entryval = entryval.Value; % Parameter value
    end

end

%This function sets a specified data value in a specified data dictionary
function setDdData(ddataobj,dataname,dataval)

    ddentry = getEntry(ddataobj,dataname); % Entry object
    entryval = getValue(ddentry); % Entry value (can be Simulink parameter)
    if isa(entryval,'Simulink.Parameter')
        entryval.Value = dataval;
    else
        entryval = dataval;
    end
    setValue(ddentry,entryval);

end