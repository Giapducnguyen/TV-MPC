function RecalibrateCIController(Block, Callback)
% Recalibrate CI Controller
% Steps:
%   1. Run dynamometer with calibration control variant selected
%   2. Read breakpoints from controller model
%   3. Generate controller table parameters
%   4. Plot results 
%   5. Add tables to the controller DD
%
% Copyright 2016-2024 The MathWorks, Inc.
nomsk=endsWith(Callback,'NoMsk');
if nomsk
    Callback = erase(Callback,'NoMsk');
end
switch Callback
    case 'OpenFcn'
        OpenFcn(Block,nomsk)
    case 'ApplyPlots'
        ApplyCal(Block, 'doplot')
    case 'ApplyCal'
        ApplyCal(Block, nomsk)
end

end
%% OpenFcn
function OpenFcn(Block,nomsk)

% Set maximum turbocharger speed
ddataobjs = ...
    loaddictionaries({'EngineDynamometer.sldd', ...
    'CiEngineCore.sldd'});
maxturbospd = getDdData(ddataobjs{1},'CiDynoMaxTurboSpd');
newturbospd = 30.*max(getDdData(ddataobjs{2},'PlntEngCICompSpdBreakPoints'))/pi;
if maxturbospd ~= newturbospd
    setDdData(ddataobjs{1}, 'CiDynoMaxTurboSpd', newturbospd)
end

% Check and set CI engine plant and controller variants
mdlname = bdroot(Block);
engblk = [mdlname,'/Engine System/Engine Plant/Engine'];
engvar = get_param(engblk,'ActiveVariant');
calengvar = 'CI Engine';
ctrlblk = [mdlname,'/Engine System/Engine Controller/Engine Control'];
ctrlvar = get_param(ctrlblk,'ActiveVariant');
calctrlvar = 'CI Engine Controller';
if ~strcmp(engvar,calengvar)
    set_param(engblk,'LabelModeActiveChoice',calengvar);
end
if ~strcmp(ctrlvar,calctrlvar)
    set_param(ctrlblk,'LabelModeActiveChoice',calctrlvar);
end

% Change masks to plot show or no show
ResultsBlkName = [bdroot(Block),'/Performance Monitor'];
if nomsk
    set_param(ResultsBlkName,'NoPlot','ci1')
    set_param(Block, 'NoMsk', '1')
    % Run Simulation
    DynamometerStart(Block, 'CalCtrlNoMsk')
else
    set_param(ResultsBlkName,'NoPlot','ci0')
    set_param(Block, 'NoMsk', '0')
    % Run Simulation
    DynamometerStart(Block, 'CalCtrl')
end

end

%% ApplyCal
function ApplyCal(ResultsBlkName, Callback)
nomsk = Callback;
doplot = strcmp(Callback,'doplot');
if doplot
    nomsk = true;
end
%% Setup
EngSpdName = 'Engine speed (rpm)';
TrqCmdName = 'Torque command (N*m)';
PwInjName = 'Injection pulse width (ms)';

%% Get data
SignalNames = DynoResultsBlock(ResultsBlkName, 'GetSignalNames');
WsVarName = get_param(ResultsBlkName, 'SteadyWsVarName');
dynoapp = 'EngineDynamometer';
try
    simoutexist = true;
    if strcmp(get_param(dynoapp,'ReturnWorkspaceOutputs'),'on')
        CalData = evalin('base', [get_param(dynoapp,'ReturnWorkspaceOutputsName'),...
            '.',WsVarName]);
    else
        CalData = evalin('base', WsVarName);
    end
    PctComplete = CalData(:, strcmp(SignalNames, 'Percent complete'));
    if isempty(PctComplete)
        PctComplete = 0;
    end
catch
    simoutexist = false;
    msgbox(getString(message('autoblks:autoblkDynoMask:msgBxNoVar',WsVarName)),'replace');
end

if simoutexist
    % Check and warn cal is not completed if the run stops prematurely
    if ~doplot && (max(PctComplete) < 99.9)
        wrnIncp = findall(0,'Name',getString(message('autoblks:autoblkUtilMisc:wrnIncomplete')));
        close(wrnIncp)
        warndlg(strcat(getString(message('autoblks:autoblkUtilMisc:wrnStopped')),...
            getString(message('autoblks:autoblkUtilMisc:wrnNoFin'))),...
            getString(message('autoblks:autoblkUtilMisc:wrnCalIncompl')));
        return
    end
    
    ddataobjs = loaddictionaries({'CiEngineController.sldd';...
        'CiEngineCore.sldd';...
        'CiMappedEngine.sldd';...
        'SimpleEngine.sldd';...
        'SiEngine.sldd'});

    FuelSpd_bp = getDdData(ddataobjs{1},'CtrlEcuCITotNBpt');
    FuelTrqCmd_bp = getDdData(ddataobjs{1}, 'CtrlEcuCITotTqBpt');

    % Get data from calibration
    EngSpd = CalData(:, strcmp(SignalNames, EngSpdName));
    EngSpd(1) = EngSpd(1) - 1e-6;
    EngSpd(end) = EngSpd(end) + 1e-6;
    TrqCmd = CalData(:, strcmp(SignalNames, TrqCmdName));
    PwInj = CalData(:, strcmp(SignalNames, PwInjName));
    PwInj(PwInj < 0) = 0;
    Sinj = getDdData(ddataobjs{2},'PlntEngCISinj');
    FuelMass = Sinj*PwInj;

    %% Create fuel mass per injection table
    [X,Y] = meshgrid(FuelSpd_bp, FuelTrqCmd_bp);
    FuelMass_Table = fitlookupn({FuelSpd_bp, FuelTrqCmd_bp}, [EngSpd, TrqCmd], FuelMass, .01);
    FuelMass_Table = FuelMass_Table';

    % Fuel mass per injection
    namfig = 'Fuel Inj';
    if ~isempty(findobj('Name',namfig))
        close('Name',namfig)
    end
    if ~nomsk || doplot
        h=figure;
        set(h,'NumberTitle','off','WindowStyle','Docked','Name',namfig);  
        surf(X, Y, FuelMass_Table)
        hold on
        plot3(EngSpd, TrqCmd, FuelMass,  '.', 'MarkerSize', 15)
        hold off
        title('Fuel Mass Per Injection Table')
        xlabel('Engine speed (rpm)')
        ylabel('Commanded torque (N*m)')
        zlabel('Fuel mass per injection (mg/inj)')
    end
end

if ~doplot
    %% Add to CI controller DD
    setDdData(ddataobjs{1},'CtrlEcuCICmdTot',FuelMass_Table);

    if ~nomsk
        h = waitbar(0, 'Flashing controller. Please wait...');
        N = 7;
        for i = 1:N
            pause(0.5);
            waitbar(i/N, h)
        end

        delete(h)
    end

    %Get fuel mass and speed operating points
    SteadyEngSpdCmdPts=getDdData(ddataobjs{3},'PlntEngCIBrkTrqSpdBpt');
    SteadyFuelCmdPts=getDdData(ddataobjs{3},'PlntEngCIBrkTrqFuelBpt');
    SteadyTrqCmdPts = getDdData(ddataobjs{3},'PlntEngCIBrkTrqBpt');

    %Convert steady fuel mass breakpoints to equivalent injector pulsewidth
    %breakpoints
    SteadyInjPwCmdPts=SteadyFuelCmdPts/Sinj;

    %account for the fact that measured torque is brake torque after accessory
    %losses
    AccessoryPowerbp = getDdData(ddataobjs{5},'PlntEngAccPwrTbl');
    AccessorySpeedbp = getDdData(ddataobjs{5},'PlntEngAccSpdBpt');
    BrakeTorqueSpeeds = repmat(SteadyEngSpdCmdPts,length(SteadyInjPwCmdPts),1);
    AccessoryPowers = interp1(AccessorySpeedbp,AccessoryPowerbp,BrakeTorqueSpeeds, 'linear', 'extrap');
    AccessoryPowers(AccessoryPowers > max(AccessoryPowerbp)) = max(AccessoryPowerbp);
    AccessoryPowers(AccessoryPowers < min(AccessoryPowerbp)) = min(AccessoryPowerbp);
    AccessoryTorques = 1000.*AccessoryPowers./(BrakeTorqueSpeeds*pi/30);
    AccessoryTorques(BrakeTorqueSpeeds <= 0) = 0;

    GetTableData = @(Name) GetResultsBlockTableData(ResultsBlkName, SteadyEngSpdCmdPts, SteadyInjPwCmdPts, Name);

    %Correct f_tbrake table at zero speed and load conditions
    f_tbrake=GetTableData('Measured engine torque (N*m)')+AccessoryTorques;
    f_tbrake(2:end,1)=f_tbrake(2:end,2);
    f_tbrake(1,1) = 0;

    %Correct f_air table at zero speed and load conditions
    f_air=max(GetTableData('Intake port mass flow rate (g/s)'),0.)/1000;
    f_air(1:end,1)=0.;

    %Correct f_fuel table at zero speed and load conditions
    f_fuel=max(GetTableData('Fuel mass flow rate (g/s)'), 0.)/1000.;
    f_fuel(1:end,1)=0.;


    %Correct f_hc table at zero speed and load conditions
    f_hc=max(GetTableData('Tailpipe HC emissions (g/s)'),0)/1000;
    f_hc(1,:)=0.;
    f_hc(1:end,1)=0.;

    %Correct f_co table at zero speed and load conditions
    f_co=max(GetTableData('Tailpipe CO emissions (g/s)'),0)/1000;
    f_co(1,:)=0.;
    f_co(1:end,1)=0.;

    %Correct f_nox table at zero speed and load conditions
    f_nox=max(GetTableData('Tailpipe NOx emissions (g/s)'),0)/1000;
    f_nox(1,:)=0.;
    f_nox(1:end,1)=0.;

    %Correct f_co2 table at zero speed and load conditions
    f_co2=max(GetTableData('Tailpipe CO2 emissions (g/s)'),0)/1000;
    f_co2(1,:)=0.;
    f_co2(1:end,1)=0.;

    %Correct f_fuel table at zero speed and load conditions
    f_eff=max(GetTableData('BSFC (g/(kW*hr))'), 0);
    f_eff(1,:)=0.;
    f_eff(1:end,1)=0.;

    MappedTables = { 'PlntEngCIBrkTrqMap',f_tbrake;
        'PlntEngCIAirFlwMap',f_air;
        'PlntEngCIFuelFlwMap',f_fuel;
        'PlntEngCIExhTemp',GetTableData('Exhaust manifold temperature (C)')+273.15;
        'PlntEngCIBSFCMap',f_eff;
        'PlntEngCIHCMap',f_hc;
        'PlntEngCICOMap',f_co;
        'PlntEngCINOxMap',f_nox;
        'PlntEngCICO2Map',f_co2;
        'PlntEngCIPMMap',zeros(size(f_tbrake))};

    for i = 1:size(MappedTables,1)
        setDdData(ddataobjs{3},MappedTables{i,1},MappedTables{i,2});
    end

    %% Re-calibrate simple engine model reference

    f_tqmax_n_bpt=getDdData(ddataobjs{4},'PlntEngTqMaxBpt');

    [Sbp,Tbp]=meshgrid(SteadyEngSpdCmdPts,SteadyTrqCmdPts);

    maxtqbp=max(SteadyTrqCmdPts)*ones(size(f_tqmax_n_bpt));

    f_tqmax=interp2(Sbp,Tbp,f_tbrake,f_tqmax_n_bpt,maxtqbp);

    setDdData(ddataobjs{4},'PlntEngTqMax',f_tqmax);

end

end

%% GetTableData
function [TableZ,RawData] = GetResultsBlockTableData(ResultsBlkName,SteadyEngSpdCmdPts,SteadyInjPwCmdPts,ZName)
    [Table, RawData] = DynoResultsBlock(ResultsBlkName, 'Fetch2DTables', 'Engine speed command (rpm)', SteadyEngSpdCmdPts,'Injection pulse width (ms)', SteadyInjPwCmdPts, ZName);
    TableZ = Table.Z;
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

%This function loads specific data dictionary(ies)
function ddataobjs = loaddictionaries(ddnames)
nobjs = numel(ddnames);
ddobjs = cell(nobjs,1);
ddataobjs = cell(nobjs,1);
for i=1:nobjs
    ddobjs{i} = Simulink.data.dictionary.open(ddnames{i});
    ddataobjs{i} = getSection(ddobjs{i},'Design Data');
end
end