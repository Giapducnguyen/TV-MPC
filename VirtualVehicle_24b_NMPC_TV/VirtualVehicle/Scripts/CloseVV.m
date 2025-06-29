% This script defines a project shortcut. 
%
% To get a handle to the current project use the following function:
%
% project = simulinkproject();
%
% You can use the fields of project to get information about the currently 
% loaded project. 
%
% See: help simulinkproject

% Copyright 2016-2022 The MathWorks, Inc.

ResetSlPrjFastLoadAndBuild
Simulink.data.dictionary.closeAll('VirtualVehicleTemplate.sldd','-discard');
%warning('on','Simulink:blocks:BusSelectorRequiresBusSignal');