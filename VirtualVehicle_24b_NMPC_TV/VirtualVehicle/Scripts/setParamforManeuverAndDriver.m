function out = setParamforManeuverAndDriver(Model, Maneuver, ManeuverOption, Driver, TestID, in,configfile,licStatus)

%   Copyright 2021-2024 The MathWorks, Inc.
simTime=VirtualAssembly.getDefaultStoptime(Maneuver,ManeuverOption);
in=setModelParameter(in,StopTime=num2str(simTime));

DriverTypePath = [Model,'/Driver Commands'];
DriverType = 'driverType';
in=in.setBlockParameter(DriverTypePath,DriverType,Driver);

ManeuverMaskPath = [Model,'/Scenarios/Reference Generator'];
in=in.setBlockParameter(ManeuverMaskPath,'LabelModeActiveChoice',Maneuver);

ManeuverMaskPath3D = [Model,'/Visualization/3D Engine'];

if strcmp(ManeuverOption,'Enabled')
    ManeuverMaskPath3DScene=[Model,'/Visualization/3D Engine/3D Engine/Simulation 3D Scene Configuration'];
    in=in.setBlockParameter(ManeuverMaskPath3D,'LabelModeActiveChoice','Engine3D');
else
    in=in.setBlockParameter(ManeuverMaskPath3D,'LabelModeActiveChoice','NoEngine3D');
end

if strcmp(Maneuver,'Drive Cycle')
    ManeuverMaskPath = [ManeuverMaskPath,'/',Maneuver,'/Drive Cycle Source'];
    in=in.setBlockParameter(ManeuverMaskPath,'cycleVar',ManeuverOption);
    maskparamap={'ScnLongVelUnit','outUnit' };
elseif contains(Maneuver,'Wide Open Throttle')

    ManeuverMaskPath = [ManeuverMaskPath,'/','WOT','/Drive Cycle Source'];
    in=in.setBlockParameter(ManeuverMaskPath,'cycleVar',ManeuverOption);
    maskparamap={'ScnLongVelUnit','outUnit' };
else

    if strcmp(ManeuverOption,'Enabled')
        if strcmp(Maneuver,'Double Lane Change')
            in=in.setBlockParameter(ManeuverMaskPath3DScene,'SceneDesc',Maneuver);
        else
            in=in.setBlockParameter(ManeuverMaskPath3DScene, 'SceneDesc','Open surface');
        end
    end

   maskparamap={'ScnSteerDir','steerDir';...
    'ScnLongVelUnit','velRefUnit';...
    'ScnISLatAccStop','ayStop';...
    };

end


in=in.setVariable("TestID",TestID);

% Update simulation test data parameters


run(configfile);
testdata=ConfigInfos.TestPlan{TestID}.Data;
if ~isempty(testdata)
    for i = 1 : size(testdata,1)

        index=find(strcmp(testdata{i,1},maskparamap(:,1)),1);

        if ~isempty(index)
            if licStatus
                in=in.setBlockParameter(ManeuverMaskPath,maskparamap{index,2},testdata{i,2});
            else
                in=in.setBlockParameter(ManeuverMaskPath,'outUnit',testdata{i,2});
            end
        else
            if strcmp(testdata{i,1},'ScnSimTime')
                in=setModelParameter(in,StopTime=num2str(testdata{i,2}));
            else
                newvalue=str2num(testdata{i,2});
                if isempty(newvalue)
                    in=in.setVariable(testdata{i,1},testdata{i,2});
                else
                    in=in.setVariable(testdata{i,1},newvalue);
                end
            end
        end

    end
end

out=in;
end


