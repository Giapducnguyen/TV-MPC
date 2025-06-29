function [DLBatt,PlntDLBatt_muInput,PlntDLBatt_sigInput,PlntDLBatt_muOutput,PlntDLBatt_sigOutput] = calibrate(trainData,testData,epochs)

%% Prepare Train Data
load(trainData,'DLBatteryTrainData');

% Resample train data to fixed time step
Ts = 1;
t_train = 0:Ts:DLBatteryTrainData.Time_s(end);
t_train=t_train';
BattInputs_Train(:,1) = interp1(DLBatteryTrainData.Time_s,DLBatteryTrainData.Current_A,t_train,'linear');
BattInputs_Train(:,2) = interp1(DLBatteryTrainData.Time_s,DLBatteryTrainData.SoC_1,t_train,'linear');
BattOutputs_Train(:,1) = interp1(DLBatteryTrainData.Time_s,DLBatteryTrainData.Voltage_V,t_train,'linear');
BattOutputs_Train(:,2) = interp1(DLBatteryTrainData.Time_s,DLBatteryTrainData.Temperature_K,t_train,'linear');

load(testData,'DLBatteryTestData');

% Resample test data to fixed time step
t_test = 0:Ts:DLBatteryTestData.Time_s(end);
t_test=t_test';
BattInputs_Test(:,1) = interp1(DLBatteryTestData.Time_s,DLBatteryTestData.Current_A,t_test,'linear');
BattInputs_Test(:,2) = interp1(DLBatteryTestData.Time_s,DLBatteryTestData.SoC_1,t_test,'linear');
BattOutputs_Test(:,1) = interp1(DLBatteryTestData.Time_s,DLBatteryTestData.Voltage_V,t_test,'linear');
BattOutputs_Test(:,2) = interp1(DLBatteryTestData.Time_s,DLBatteryTestData.Temperature_K,t_test,'linear');

offset = 0;

% Normalize data
mu_input = mean(BattInputs_Train);
sig_input = std(BattInputs_Train);
mu_output = mean(BattOutputs_Train);
sig_output = std(BattOutputs_Train);

BattInputs_Train = (BattInputs_Train - mu_input)./sig_input;
BattOutputs_Train = (BattOutputs_Train - mu_output)./sig_output;
BattInputs_Test = (BattInputs_Test - mu_input)./sig_input;
BattOutputs_Test = (BattOutputs_Test - mu_output)./sig_output;

% organize data
current_train = BattInputs_Train(1+offset:end,1);
soc_train = BattInputs_Train(1+offset:end,2);
voltage_train = BattOutputs_Train(1+offset:end,1);
temperature_train = BattOutputs_Train(1+offset:end,2);

current_test = BattInputs_Test(1+offset:end,1);
soc_test = BattInputs_Test(1+offset:end,2);
voltage_test = BattOutputs_Test(1+offset:end,1);
temperature_test = BattOutputs_Test(1+offset:end,2);

% generate training trajectories in short segments
ExperimentLength = 50;
N = round(length(current_train)/ExperimentLength)-1;
% prepare training data set

CurrentArray = cell(1,N);
SOCArray = cell(1,N);
VoltageArray = cell(1,N);
TemperatureArray = cell(1,N);
Y = cell(1,N);
U = cell(1,N);

for ct=1:N
   tmp = array2timetable(current_train((ct-1)*ExperimentLength+1:ct*ExperimentLength+1,:),"RowTimes",seconds(0:Ts:ExperimentLength));
   tmp.Properties.VariableNames = {'Current'};
   CurrentArray{ct} = tmp;

   tmp = array2timetable(current_train((ct-1)*ExperimentLength+1:ct*ExperimentLength+1,:),"RowTimes",seconds(0:Ts:ExperimentLength));
   tmp.Properties.VariableNames = {'Current'};
   CurrentArray{ct} = tmp;

   tmp = array2timetable(soc_train((ct-1)*ExperimentLength+1:ct*ExperimentLength+1,:),"RowTimes",seconds(0:Ts:ExperimentLength));
   tmp.Properties.VariableNames = {'SOC'};
   SOCArray{ct} = tmp;
   tmp = array2timetable(voltage_train((ct-1)*ExperimentLength+1:ct*ExperimentLength+1,:),"RowTimes",seconds(0:Ts:ExperimentLength));
   tmp.Properties.VariableNames = {'Voltage'};
   VoltageArray{ct} = tmp;
   tmp = array2timetable(temperature_train((ct-1)*ExperimentLength+1:ct*ExperimentLength+1,:),"RowTimes",seconds(0:Ts:ExperimentLength));
   tmp.Properties.VariableNames = {'Temperature'};
   TemperatureArray{ct} = tmp;

   % Input & OUtput for Neural State Space
   Y{ct} = [VoltageArray{ct} TemperatureArray{ct}];
   U{ct} = [CurrentArray{ct} SOCArray{ct} ];
end

%% Prepare Test Data
% len = length(current_test);
Current_Test = array2timetable(current_test,"RowTimes",seconds(t_test));
Current_Test.Properties.VariableNames = {'Current'};
SOC_Test = array2timetable(soc_test,"RowTimes",seconds(t_test));
SOC_Test.Properties.VariableNames = {'SOC'};
Voltage_Test = array2timetable(voltage_test,"RowTimes",seconds(t_test));
Voltage_Test.Properties.VariableNames = {'Voltage'};
Temperature_Test = array2timetable(temperature_test,"RowTimes",seconds(t_test));
Temperature_Test.Properties.VariableNames = {'Temperature'};

%% Prepare training data sets for neural state-space model
Y{end+1} = [Voltage_Test Temperature_Test];
U{end+1} = [Current_Test SOC_Test   ];

%% Train neural state-space model

% obj = idNeuralStateSpace(1,"NumInputs",3,'Ts',Ts);
    obj = idNeuralStateSpace(2,"NumInputs",2,'Ts',Ts);
    % Set hyper parameters of Multi-Layer Perceptron (MLP) network
    obj.StateNetwork = createMLPNetwork(obj,'state',...
        LayerSizes=[128 128],Activations='tanh', ...
        WeightsInitializer="glorot",BiasInitializer="zeros");
    % Set training options
    options = nssTrainingOptions('adam');
    options.MaxEpochs = epochs;%570;
    options.MiniBatchSize = round(N/30);
    options.LearnRate = 0.0002;
    options.GradientDecayFactor = 0.995;
    options.PlotLossFcn = true;
    % Train neural network
    obj = nlssest(U,Y,obj,options,...
        'UseLastExperimentForValidation',true,...
        'ValidationFrequency',5);
    % Output Assignment
    DLBatt.NSSObj = obj;
    PlntDLBatt_muInput = mu_input;
    PlntDLBatt_sigInput = sig_input;
    PlntDLBatt_muOutput = mu_output;
    PlntDLBatt_sigOutput = sig_output;
end

