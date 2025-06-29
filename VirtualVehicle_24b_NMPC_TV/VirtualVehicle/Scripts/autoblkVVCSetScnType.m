function autoblkVVCSetScnType()

%   Copyright 2024 The MathWorks, Inc.

block=gcb;
simstopped = autoblkschecksimstopped(block);
if ~simstopped
    return;
end
maskobj = Simulink.Mask.get(block);
scenario=maskobj.Parameters(1);
maneuver=maskobj.Parameters(2);
engine3d=maskobj.Parameters(4);

plantmodel=get_param([bdroot(block),'/Vehicle'],'LabelModeActiveChoice');
chassis=get_param([bdroot(block),'/Vehicle/',plantmodel,'/Vehicle Body/Vehicle'],'LabelModeActiveChoice');

lateral=strcmp(chassis,'VehicleBody6DOF');

if ~lateral
    scenario.set('TypeOptions',{'Drive Cycle Tests'});
else
    scenario.set('TypeOptions',{'Drive Cycle Tests','Vehicle Dynamics Maneuver'});
end

DriveCycleTestsItems={'Drive Cycle','Wide Open Throttle'};
VehicleDynamicsManeuverItems={'Increasing Steer', 'Swept Sine', 'Sine with Dwell', 'Fishhook', 'Braking','Double Lane Change', 'Constant Radius'};

if strcmp(scenario.Value,'Drive Cycle Tests')
    scenarioitems=DriveCycleTestsItems;
    %set engine 3d
    engine3d.set('Value','Disabled','Enabled','off');
else
    scenarioitems=VehicleDynamicsManeuverItems;
    %set engine 3d
    engine3d.set('Enabled','on');
end

maneuver.set('TypeOptions',scenarioitems,'Value',scenarioitems{1});

autoblkVVCSetManType();
end