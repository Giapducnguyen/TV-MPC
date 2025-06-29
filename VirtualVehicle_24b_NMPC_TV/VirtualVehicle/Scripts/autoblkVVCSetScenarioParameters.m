function autoblkVVCSetScenarioParameters()

% autoblkVVCSetScenarioParameters is the callback function of 'change current scenario' button of mask of 'change current scenario' button
% It sets scenario parameters for configured virtual vehicle

%   Copyright 2024 The MathWorks, Inc.

model=bdroot(gcb);
block=gcb;

simstopped = autoblkschecksimstopped(block);
if ~simstopped
    return;
end

maskobj = Simulink.Mask.get(block);
Maneuver=maskobj.Parameters(2).Value;
dcsource=maskobj.Parameters(3);
engine3d=maskobj.Parameters(4).Value;
Driver=  maskobj.Parameters(5).Value;
ManeuverOption=dcsource.Value;

SetScnWaitBar = waitbar(0.1,'Setting up virtual vehicle scenarios...',...
    'CloseRequestFcn', @(~,~)closeWaitBar(obj));
%% set driver
%load_system(model);
DriverTypePath = [model,'/Driver Commands'];
DriverType = 'driverType';
if isempty(Driver)
    Driver=  maskobj.Parameters(3).TypeOptions{1};
    maskobj.Parameters(3).Value=Driver;
end
set_param(DriverTypePath,DriverType,Driver);

waitbar(0.1,SetScnWaitBar);
%% set scenario
plant=get_param([model,'/Vehicle'],'LabelModeActiveChoice');
plantmodel=[model,'/Vehicle/',plant];
%get scenario
ManeuverMaskPath=[model,'/Scenarios/Reference Generator'];
set_param(ManeuverMaskPath,'LabelModeActiveChoice',Maneuver);
%get trailer path
Trailer=get_param([plantmodel,'/Trailer'],'LabelModeActiveChoice');
%get 3d engine path
ManeuverMaskPath3D = [model,'/Visualization/3D Engine'];
%get grond feedback path
GrndFdbkPath = [model,'/Environment/Ground Feedback'];

if strcmp(Maneuver,'Drive Cycle')

    ManeuverMaskPath = [ManeuverMaskPath,'/Drive Cycle/Drive Cycle Source'];
    set_param(ManeuverMaskPath,'cycleVar',ManeuverOption);
    set_param([model,'/Visualization/Scope Type'],'LabelModeActiveChoice','0');
    set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','2');
    set_param(ManeuverMaskPath3D,'LabelModeActiveChoice','NoEngine3D');
    set_param(GrndFdbkPath,'LabelModeActiveChoice','0');

    % drive cycle can work with both longitudinal driver and predictive
    % driver
    if strcmp(Driver,'Predictive Driver')
        set_param(DriverTypePath,DriverType,'Longitudinal Driver');
    end

elseif contains(Maneuver,'Wide Open Throttle')

    ManeuverMaskPath=[ManeuverMaskPath,'/WOT/Drive Cycle Source'];
    set_param(ManeuverMaskPath,'cycleVar',ManeuverOption);
    set_param(ManeuverMaskPath3D,'LabelModeActiveChoice','NoEngine3D');
    set_param(GrndFdbkPath,'LabelModeActiveChoice','0');
    set_param([model, '/Visualization/Scope Type'],'LabelModeActiveChoice','0');
    set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','2');

    % WOT can work with both longitudinal driver and predictive
    % driver
    if strcmp(Driver,'Predictive Driver')
        set_param(DriverTypePath,DriverType,'Longitudinal Driver');
    end
else

    if strcmp(engine3d,'Enabled')
        % 3d engine enabled
        set_param(ManeuverMaskPath3D,'LabelModeActiveChoice','Engine3D');
        set_param(GrndFdbkPath,'LabelModeActiveChoice','1');
        ManeuverMaskPath3DScene=[model,'/Visualization/3D Engine/3D Engine/Simulation 3D Scene Configuration'];
        ManeuverMaskPath3DVehicle=[model,'/Visualization/3D Engine/3D Engine/Simulation 3D Vehicle'];
        ManeuverMaskPath3DTrailer=[model,'/Visualization/3D Engine/3D Engine/Trailer'];
        if strcmp(Trailer,'NoTrailer')
            set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','0');
            set_param(ManeuverMaskPath3DVehicle, 'PassVehMesh', 'Muscle car');
            set_param(ManeuverMaskPath3DTrailer, 'OverrideUsingVariant', 'No Trailer');
        else
            set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','3');
            set_param(ManeuverMaskPath3DVehicle, 'PassVehMesh', 'Small pickup truck');
            set_param(ManeuverMaskPath3DTrailer, 'OverrideUsingVariant', 'One-Axle Trailer');
        end

        if strcmp(Maneuver,'Double Lane Change')
            set_param(ManeuverMaskPath3DScene,'SceneDesc','Double lane change');
        else
            set_param(ManeuverMaskPath3DScene,'SceneDesc','Open surface');
        end

    else
        %3d engine disabled
        set_param(ManeuverMaskPath3D,'LabelModeActiveChoice','NoEngine3D');
        set_param(GrndFdbkPath,'LabelModeActiveChoice','0');

        switch Maneuver
            case 'Double Lane Change'
                set_param([model,'/Visualization/Scope Type'],'LabelModeActiveChoice','1');
                if strcmp(Trailer,'NoTrailer')
                    set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','1');
                else
                    set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','3');
                end
                set_param(DriverTypePath,DriverType,'Predictive Stanley Driver');
                set_param([ManeuverMaskPath '/Double Lane Change/Double Lane Change'],'use3DCones','off');

            case 'Constant Radius'
                set_param([model,'/Visualization/Scope Type'],'LabelModeActiveChoice','2');
                if strcmp(Trailer,'NoTrailer')
                    set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','1');
                else
                    set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','3');
                end
                set_param(DriverTypePath,DriverType,'Predictive Stanley Driver');
                set_param([ManeuverMaskPath '/Constant Radius/Constant Radius'],'use3DCones','off');
            otherwise
                set_param([model,'/Visualization/Scope Type'],'LabelModeActiveChoice','0');
                if strcmp(Trailer,'NoTrailer')
                    set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','0');
                else
                    set_param([model,'/Visualization/Vehicle XY Plotter'],'LabelModeActiveChoice','3');
                end
                set_param(DriverTypePath,DriverType,'Predictive Driver');
        end
    end
end

%% set default simulation time
simTime=VirtualAssembly.getDefaultStoptime(Maneuver,ManeuverOption);

set_param(model,'stopTime',num2str(simTime));
waitbar(0.3,SetScnWaitBar);

%% set scenario related parameters

driver=get_param([bdroot,'/Driver Commands/Driver Commands'],'LabelModeActiveChoice');
list=VirtualAssemblyScenarioParaList(Maneuver,driver);

try
    DictionaryObj = Simulink.data.dictionary.open('VirtualVehicleTemplate.sldd');
    dDataSectObj = getSection(DictionaryObj,'Design Data');
    n=size(list,1);
    for i=1:n
        entryName=list{i,1};
        entryValue=list{i,2};
        newvalue=str2num(entryValue);
        if isempty(entryValue)
            continue;
        end
        if exist(dDataSectObj,entryName)
            varObj = getEntry(dDataSectObj,entryName);
            setValue(varObj,newvalue);
            waitbar(0.3+(i/n)*0.3,SetScnWaitBar);
        end
    end
    saveChanges(DictionaryObj);
    waitbar(0.8,SetScnWaitBar);
    close(DictionaryObj);
catch
    Simulink.data.dictionary.closeAll('VirtualVehicleTemplate.sldd','-discard');
end

waitbar(1,SetScnWaitBar);
delete(SetScnWaitBar);

end