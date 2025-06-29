function varargout = DynoResultsBlock(varargin)
%
%
% Copyright 2016-2022 The MathWorks, Inc.
%% Setup
Block = varargin{1};
varargout{1} = 0;
switch varargin{2}
    case 'Initialization'
        Initialization(Block);
    case 'StartFcn'
        StartFcn(Block)
    case 'StopFcn'
        StopFcn(Block)
    case 'PlotSteadyButtonCallback'
        PlotSteadyButtonCallback(Block);
    case 'PlotDynamicButtonCallback'
        PlotDynamicButtonCallback(Block);
    case 'GetSignalNames'
        varargout{1} = GetSignalNames(Block);
    case 'Fetch2DTables'
        [varargout{1}, varargout{2}] = Fetch2DTables(Block, varargin{3:end});
    case 'scatteredInterp2'
        varargout{1} = scatteredInterp2(Block, varargin{3:end});
end

end
%% Initialization
function Initialization(Block)
%% Set workspace variable name
set_param([Block, '/Steady State Logging/To Workspace'], 'VariableName', get_param(Block, 'SteadyWsVarName'))
set_param([Block, '/Dynamic Logging/To Workspace'], 'VariableName', get_param(Block, 'DynWsVarName'))

%% Set options in axis popup
SignalNames = sort(GetSignalNames(Block));
MaskObject = get_param(Block,'MaskObject');
SetPopupOptions(SignalNames, MaskObject, 'XVarPopup')
SetPopupOptions(['None', SignalNames], MaskObject, 'YVarPopup')
SetPopupOptions(['None', SignalNames], MaskObject, 'ZVarPopup')

end

%% GetSignalNames
function SignalNames = GetSignalNames(Block, LogType)
if nargin < 2
    LogType = 'Static';
end

switch LogType
    case 'Static'
        BusCreatorName = [Block, '/Bus Creator'];
        SignalNames = cellstr(get_param(BusCreatorName,'InputSignalNames'));
    case 'Dynamic'
        BusCreatorName = [Block, '/Dynamic Logging/Bus Creator'];
        SignalNames = get_param(BusCreatorName,'InputSignalNames');
end

end

%% StopFcn
function StopFcn(Block)
noplot = endsWith(get_param(Block,'NoPlot'),'1');
simoutparm = get_param(Block, 'SteadyWsVarName');
dynoapp = 'EngineDynamometer';
% Close waitbar
if ~noplot
    h = findall(0, 'Type', 'figure', 'Tag', 'DynamometerWaitbarFig');
    if ~isempty(h)
        delete(h(1))
    end
    try
        simoutexist = true;
        if strcmp(get_param(dynoapp,'ReturnWorkspaceOutputs'),'on')
            SimOutData = evalin('base', [get_param(dynoapp,'ReturnWorkspaceOutputsName'),...
                '.',simoutparm]);
        else
            SimOutData = evalin('base', simoutparm);
        end
    catch
        simoutexist = false;
        msgbox(getString(message('autoblks:autoblkDynoMask:msgBxNoVar',simoutparm)),'replace');
    end
end
if ~noplot && simoutexist && ~isempty(SimOutData)
    PlotSteadyButtonCallback(Block)
end
if ~noplot && simoutexist && strcmp(get_param(Block, 'DispAtEndCheckbox'), 'on')
    PlotDynamicButtonCallback(Block)
end
end

%% StartFcn
function StartFcn(Block)
noplot = endsWith(get_param(Block,'NoPlot'),'1');
if ~noplot && strcmp(get_param(Block, 'ShowWaitbarCheckbox'), 'on')
    h = waitbar(0, 'Dynamometer Test Progress');
    h.Tag = 'DynamometerWaitbarFig';
end
end

%% PlotSteadyButtonCallback
function PlotSteadyButtonCallback(Block)
simoutparm = get_param(Block, 'SteadyWsVarName');
dynoapp = 'EngineDynamometer';
try
    simoutexist = true;
    if strcmp(get_param(dynoapp,'ReturnWorkspaceOutputs'),'on')
        SimOutData = evalin('base', [get_param(dynoapp,'ReturnWorkspaceOutputsName'),...
            '.',simoutparm]);
    else
        SimOutData = evalin('base', simoutparm);
    end
catch
    simoutexist = false;
    msgbox(getString(message('autoblks:autoblkDynoMask:msgBxNoVar',simoutparm)),'replace');
end
if simoutexist
    SignalNames = GetSignalNames(Block);
    XName = get_param(Block, 'XVarPopup');
    YName = get_param(Block, 'YVarPopup');
    ZName = get_param(Block, 'ZVarPopup');
    PlotSteadyResults(SimOutData, SignalNames, XName, YName, ZName)
end
end

%% PlotDynamicButtonCallback
function PlotDynamicButtonCallback(Block)
spkignit = startsWith(get_param(Block,'NoPlot'),'si');
simoutparm = get_param(Block, 'DynWsVarName');
dynoapp = 'EngineDynamometer';
try
    simoutexist = true;
    if strcmp(get_param(dynoapp,'ReturnWorkspaceOutputs'),'on')
        SimOutData = evalin('base', [get_param(dynoapp,'ReturnWorkspaceOutputsName'),...
            '.',simoutparm]);
    else
        SimOutData = evalin('base', get_param(Block, 'DynWsVarName'));
    end
catch
    simoutexist = false;
    msgbox(getString(message('autoblks:autoblkDynoMask:msgBxNoVar',simoutparm)),'replace');
end
if simoutexist
    SignalNames = GetSignalNames(Block, 'Dynamic');  
    cleanam = @(signam) signam(2:end-1);
    SignalNames=cellfun(cleanam,SignalNames,"UniformOutput",false); 
    SDI_data=cellfun(@dat4sdi,num2cell(SimOutData,1),SignalNames,"UniformOutput",false);
    % Signals to plot
    sig2plot={'Engine speed (rpm)';'Torque command (N*m)';...
        'Measured engine torque (N*m)';'Fuel mass flow rate (g/s)';...
        'Intake port mass flow rate (g/s)';...
        'Turbocharger shaft speed (rpm)'};
    turbo = true;
    if spkignit
        load_system('SiEngine');
        SiCoreEngName = get_param('SiEngine/Dynamic SI Engine','ActiveVariant');
        if strcmp(SiCoreEngName,'SiEngineCoreNA') || strcmp(SiCoreEngName,'SiEngineCoreVNA')
            turbo = false;
            SDI_data = SDI_data(~strcmp(SignalNames,sig2plot{6}));
        end
    end

    % Subplot row definition
    pltrow = [1;2;2;3;3;4];
    Simulink.sdi.view
    Simulink.sdi.clearAllSubPlots
    if turbo
        Simulink.sdi.setSubPlotLayout(pltrow(end),1);
    else
        Simulink.sdi.setSubPlotLayout(pltrow(end)-1,1);
    end
    sdiRun = Simulink.sdi.Run.create;
    sdiRun.Name = 'Dynamometer Results';
    add2run = @(sdidata) add(sdiRun,'vars',sdidata);
    cellfun(add2run,SDI_data);
    icmp = @(s2p) find(strcmp(SignalNames,s2p));
    i2plot=cellfun(icmp,sig2plot);    
    pltsub = @(i2p,prow) plotOnSubPlot(getSignalByIndex(sdiRun,i2p),prow,1,true);
    arrayfun(pltsub,i2plot(1:end-1),pltrow(1:end-1));
    if turbo
        plotOnSubPlot(getSignalByIndex(sdiRun,i2plot(end)),pltrow(end),1,true);
    end
end

    function datout = dat4sdi(simdat,signam)
        Time = SimOutData(:, strcmp(SignalNames, 'Time (s)'));
        datout = timeseries(simdat, Time);
        datout.Name = signam;
    end

end

%% Set popup options
function SetPopupOptions(SignalNames, MaskObject, PopupName)
Popup = MaskObject.Parameters(strcmp({MaskObject.Parameters.Name}, PopupName));
Popup.TypeOptions = SignalNames;
end

%% Fetch2DTables
function [Table, RawData] = Fetch2DTables(Block, XName, XValue, YName, YValue, ZName)

[XX,YY] = meshgrid(XValue, YValue);
Table.X = XX;
Table.Y = YY;
[Table.Z, RawData] = scatteredInterp2(Block, XName, XX, YName, YY, ZName);
end

%% scatteredInterp2
function [ZValue, RawData] = scatteredInterp2(Block, XName, XValue, YName, YValue, ZName)
%% Setup
SimOutData = evalin('base', get_param(Block, 'SteadyWsVarName'));
SignalNames = GetSignalNames(Block);
SSFlagName = 'Steady state flag';

SSFlag = boolean(SimOutData(:, strcmp(SignalNames, SSFlagName)));
XData = SimOutData(SSFlag, strcmp(SignalNames, XName));
YData = SimOutData(SSFlag, strcmp(SignalNames, YName));
ZData = SimOutData(SSFlag, strcmp(SignalNames, ZName));
RawData.X = XData;
RawData.Y = YData;
RawData.Z = ZData;
%% Create table
warning('off','MATLAB:scatteredInterpolant:DupPtsAvValuesWarnId');
f = scatteredInterpolant(XData,YData,ZData, 'linear', 'nearest');
warning('on','MATLAB:scatteredInterpolant:DupPtsAvValuesWarnId');
ZValue = f(XValue, YValue);
    
end