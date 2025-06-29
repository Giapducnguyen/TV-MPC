function autoblkVVCOpenScnMask()

%   Copyright 2024 The MathWorks, Inc.

block=gcb;
simstopped = autoblkschecksimstopped(block);
if ~simstopped
    return;
end
VehSys=bdroot(block);
maskobj = Simulink.Mask.get(block);
maneuver=maskobj.Parameters(2);

switch maneuver.Value
    case 'Drive Cycle'
        path=[VehSys,'/Scenarios/Reference Generator/Drive Cycle/Drive Cycle Source'];
    case 'Wide Open Throttle'
        path=[VehSys,'/Scenarios/Reference Generator/WOT/Drive Cycle Source'];
    otherwise
        path=[VehSys,'/Scenarios/Reference Generator/',maneuver.Value,'/',maneuver.Value];        
end

open_system(path, 'mask');
end