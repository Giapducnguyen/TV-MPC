function autoblkVVCSetupScenarioMask()

%   Copyright 2024 The MathWorks, Inc.

block=gcb;

simstopped = autoblkschecksimstopped(block);
if ~simstopped
    return;
end

autoblkVVCSetScnType();

end