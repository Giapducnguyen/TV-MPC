mdl = 'ConfiguredVirtualVehicleModel';
open_system(mdl);

%%

%Test 1 
in(1) = Simulink.SimulationInput(mdl); 
in(1) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Increasing Steer', 'Disabled', 'Predictive Driver',1, in(1), 'ConfiguredVirtualVehicle',1);

%%

%Test 2 
in(2) = Simulink.SimulationInput(mdl); 
in(2) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Swept Sine', 'Disabled', 'Predictive Driver',2, in(2), 'ConfiguredVirtualVehicle',1);

%%

%Test 3 
in(3) = Simulink.SimulationInput(mdl); 
in(3) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Sine with Dwell', 'Disabled', 'Predictive Driver',3, in(3), 'ConfiguredVirtualVehicle',1);

%%

%Test 4 
in(4) = Simulink.SimulationInput(mdl); 
in(4) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Fishhook', 'Disabled', 'Predictive Driver',4, in(4), 'ConfiguredVirtualVehicle',1);

%%

%Test 5 
in(5) = Simulink.SimulationInput(mdl); 
in(5) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Double Lane Change', 'Disabled', 'Predictive Stanley Driver',5, in(5), 'ConfiguredVirtualVehicle',1);

%%

%Test 6 
in(6) = Simulink.SimulationInput(mdl); 
in(6) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Constant Radius', 'Disabled', 'Predictive Stanley Driver',6, in(6), 'ConfiguredVirtualVehicle',1);

%%

%Test 7 
in(7) = Simulink.SimulationInput(mdl); 
in(7) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Drive Cycle', 'FTP75', 'Predictive Stanley Driver',7, in(7), 'ConfiguredVirtualVehicle',1);

%%

%Test 8 
in(8) = Simulink.SimulationInput(mdl); 
in(8) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Drive Cycle', 'FTP75', 'Longitudinal Driver',8, in(8), 'ConfiguredVirtualVehicle',1);

%%

%Test 9 
in(9) = Simulink.SimulationInput(mdl); 
in(9) = setParamforManeuverAndDriver('ConfiguredVirtualVehicleModel','Wide Open Throttle', 'Wide Open Throttle (WOT)', 'Longitudinal Driver',9, in(9), 'ConfiguredVirtualVehicle',1);
multiSimMgr = MultiSim.internal.MultiSimManager.getMultiSimManager();
simout = parsim(in, 'ShowSimulationManager', 'on');
jobViewer = multiSimMgr.WindowList(end);
job = jobViewer.Job;
figMgr = job.FigureManager;
figMgr.FigureObjects(1).Title = "TestID vs StopTime";
figMgr.FigureObjects(1).XData = "StopTime";
figMgr.FigureObjects(1).XLabel = "StopTime";
figMgr.FigureObjects(1).YData = "TestID";
figMgr.FigureObjects(1).YLabel = "TestID";
save('simout.mat','simout','-v7.3');
