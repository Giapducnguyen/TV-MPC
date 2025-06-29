function RecalibrateSIController(Block, Callback)
% Recalibrate SI Controller
% Steps:
%   1. Run dynamometer with 'Calibrate Throttle and Wastegate' variant
%       selected. 
%   2. Read breakpoints and throttle table from controller model: Speed_bp,
%       Torque_bp, Load_bp, TAP2TPP_bp, and TAP2TPP_Table
%   3. Generate controller table parameters: LOAD_Table, TAP_Table, and WAP_Table
%   4. Plot results 
%   5. Add tables to the controller DD
%
% Copyright 2016-2024 The MathWorks, Inc.
nomsk = endsWith(Callback,'NoMsk');
if nomsk
    Callback = erase(Callback,'NoMsk');
end
switch Callback
    case 'OpenFcn'
        OpenFcn(Block, nomsk)
    case 'StopMsg'
        StopMsg
    case 'ApplyPlots'
        ApplyCal(Block, 'doplot')
    case 'ApplyCal'
        ApplyCal(Block, nomsk)
end
    
end
%% OpenFcn
function OpenFcn(Block, nomsk)

% Set maximum turbocharger speed
ddataobjs = ...
    loaddictionaries({'EngineDynamometer.sldd', ...
    'SiEngineCore.sldd'});
maxturbospd = getDdData(ddataobjs{1},'SiDynoMaxTurboSpd');
newturbospd = 30.*max(getDdData(ddataobjs{2},'PlntEngCmpSpdBpt'))/pi;
if maxturbospd ~= newturbospd
    setDdData(ddataobjs{1}, 'SiDynoMaxTurboSpd', newturbospd)
end

% Check and set SI engine plant and controller variants
mdlname = bdroot(Block);
engblk = [mdlname,'/Engine System/Engine Plant/Engine'];
engvar = get_param(engblk,'ActiveVariant');
calengvar = {'SI Engine','SI DL Engine','GTPowerEngineVV'};
ctrlblk = [mdlname,'/Engine System/Engine Controller/Engine Control'];
ctrlvar = get_param(ctrlblk,'ActiveVariant');
calctrlvar = 'SI Engine Controller';
if isempty(intersect(calengvar,engvar))
    set_param(engblk,'LabelModeActiveChoice',calengvar{1});
end
if ~strcmp(ctrlvar,calctrlvar)
    set_param(ctrlblk,'LabelModeActiveChoice',calctrlvar);
end

% Change masks to plot show or no show
ResultsBlkName = [bdroot(Block),'/Performance Monitor'];
if nomsk
    set_param(ResultsBlkName,'NoPlot','si1')
    set_param(Block, 'NoMsk', '1')
    % Run Simulation
    DynamometerStart(Block, 'CalThrWgNoMsk')
else
    set_param(ResultsBlkName,'NoPlot','si0')
    set_param(Block, 'NoMsk', '0')
    % Run Simulation
    DynamometerStart(Block, 'CalThrWg')
end
end

%% StopMsg
function StopMsg
% Check and warn for incomplete results if the run stops prematurely
warndlg(getString(message('autoblks:autoblkUtilMisc:wrnStopped')),...
        getString(message('autoblks:autoblkUtilMisc:wrnIncomplete')));
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
LoadName = 'Normalized air charge';
EngTrqName = 'Measured engine torque (N*m)';
TrqCmdName = 'Torque command (N*m)';
WAPName = 'Wastegate area percent';
TPPName = 'Throttle position percent';

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

    % Get breakpoints and throttle area table
    siengblk = 'EngineDynamometer/Engine System/Engine Plant/Engine/SI Engine';
    SiCoreEngName = get_param([siengblk,'/Dynamic SI Engine'],'ActiveVariant');

    ddataobjs = loaddictionaries({'SiEngineController.sldd', ...
        'SiMappedEngine.sldd', 'SimpleEngine.sldd', 'SiEngine.sldd'});

    TAP2TPP_bp=getDdData(ddataobjs{1},'CtrlEcuTppTapBpt');
    TAP2TPP_Table=getDdData(ddataobjs{1},'CtrlEcuTpp');
    Load_bp=getDdData(ddataobjs{1},'CtrlEcuTapLBpt');
    Torque_bp=getDdData(ddataobjs{1},'CtrlEcuLCmdTqBpt');
    Speed_bp=getDdData(ddataobjs{1},'CtrlEcuLCmdSpdBpt');

    % Get data from calibration
    EngSpd = CalData(:, strcmp(SignalNames, EngSpdName));
    EngSpd(1) = EngSpd(1) - 1e-6;
    EngSpd(end) = EngSpd(end) + 1e-6;
    Load = CalData(:, strcmp(SignalNames, LoadName));
    EngTrq = CalData(:, strcmp(SignalNames, EngTrqName));
    TrqCmd = CalData(:, strcmp(SignalNames, TrqCmdName));
    WAP = CalData(:, strcmp(SignalNames, WAPName));
    TPP = CalData(:, strcmp(SignalNames, TPPName));
    TAP = interp1(TAP2TPP_Table, TAP2TPP_bp, TPP, 'linear', 'extrap');
    TAP(TAP < 0) = 0;
    TAP(TAP > 100) = 100;

    %% Create load command table
    [X,Y] = meshgrid(Speed_bp, Torque_bp);
    LOAD_Table = fitlookupn({Speed_bp, Torque_bp}, [EngSpd, TrqCmd], Load, .01);
    LOAD_Table = LOAD_Table';

    for i = 2:size(LOAD_Table, 1)
        for j = 1:size(LOAD_Table, 2)
            if LOAD_Table(i, j) < LOAD_Table(i-1, j)
                LOAD_Table(i, j) = LOAD_Table(i-1, j);
            end
        end
    end
    LOAD_Table(1,:) = 0;
    % Commanded Load Table
    namfig = 'Cmd Load';
    if ~isempty(findobj('Name',namfig))
        close('Name',namfig)
    end
    if ~nomsk || doplot
        h=figure;
        set(h,'NumberTitle','off','WindowStyle','Docked','Name',namfig);
        surf(X, Y, LOAD_Table)
        hold on
        plot3(EngSpd, EngTrq, Load,  '.', 'MarkerSize', 15)
        hold off
        title(getString(message('autoblks:autoblkUtilMisc:loadTitle')))
        xlabel(getString(message('autoblks:autoblkUtilMisc:rpmX')))
        ylabel(getString(message('autoblks:autoblkUtilMisc:loadY')))
        zlabel(getString(message('autoblks:autoblkUtilMisc:loadC')))
    end
    %% Create throttle area percent table
    [X,Y] = meshgrid(Speed_bp, Load_bp);
    TAP_Table = fitlookupn({Speed_bp, Load_bp}, [EngSpd, Load], TAP, .01);
    TAP_Table = TAP_Table';

    TAP_Table(1,:) = 0;
    TAP_Table(TAP_Table < 0) = 0;
    TAP_Table(TAP_Table > 100) = 100;
    for i = 2:size(TAP_Table, 1)
        for j = 1:size(TAP_Table, 2)
            if TAP_Table(i, j) < TAP_Table(i-1, j)
                TAP_Table(i, j) = TAP_Table(i-1, j);
            end
        end
    end
    % Throttle Area Percent Table
    namfig = 'Thr %';
    if ~isempty(findobj('Name',namfig))
        close('Name',namfig)
    end
    if ~nomsk || doplot
        h=figure;
        set(h,'NumberTitle','off','WindowStyle','Docked','Name',namfig); 
        surf(X, Y, TAP_Table)
        hold on
        plot3(EngSpd, Load, TAP,  '.', 'MarkerSize', 15)
        hold off
        title(getString(message('autoblks:autoblkUtilMisc:throttleTitle')))
        xlabel(getString(message('autoblks:autoblkUtilMisc:rpmX')))
        ylabel(getString(message('autoblks:autoblkUtilMisc:loadC')))
        zlabel(getString(message('autoblks:autoblkUtilMisc:throttleZ')))
    end

    %% Create wastegate area percent table
    [X,Y] = meshgrid(Speed_bp, Load_bp);
    WAP_Table = fitlookupn({Speed_bp, Load_bp}, [EngSpd, Load], WAP, .01);
    WAP_Table = WAP_Table';

    WAP_Table(WAP_Table < 0) = 0;
    WAP_Table(WAP_Table > 100) = 100;
    WAP_Table(:, 1) = 100;
    for i = 2:size(WAP_Table, 1)
        for j = 1:size(WAP_Table, 2)
            if WAP_Table(i, j) > WAP_Table(i-1, j)
                WAP_Table(i, j) = WAP_Table(i-1, j);
            end
        end
    end
    % Wastegate Area Percent Table
    namfig = 'WG %';
    if ~isempty(findobj('Name',namfig))
        close('Name',namfig)
    end
    if (~nomsk || doplot) && (strcmp(SiCoreEngName,'SiEngineCore') || ...
            strcmp(SiCoreEngName,'SiEngineCoreV') || ...
            strcmp(SiCoreEngName,'SiEngineCoreVThr2'))
        h=figure;
        set(h,'NumberTitle','off','WindowStyle','Docked','Name',namfig); 
        surf(X, Y, WAP_Table)
        hold on
        plot3(EngSpd, Load, WAP,  '.', 'MarkerSize', 15)
        hold off
        title(getString(message('autoblks:autoblkUtilMisc:wgTitle')))
        xlabel(getString(message('autoblks:autoblkUtilMisc:rpmX')))
        ylabel(getString(message('autoblks:autoblkUtilMisc:loadC')))
        zlabel(getString(message('autoblks:autoblkUtilMisc:wgZ')))
    end
end

if ~doplot
    %% Add to controller workspace
    % LOAD_Table, TAP_Table, and WAP_Table
    setDdData(ddataobjs{1},'CtrlEcuLCmd',LOAD_Table);
    setDdData(ddataobjs{1},'CtrlEcuTap',TAP_Table);
    setDdData(ddataobjs{1},'CtrlEcuWap',WAP_Table);

    if ~nomsk
        h = waitbar(0, getString(message('autoblks:autoblkUtilMisc:waitBFlash')));
        N = 7;
        for i = 1:N
            pause(0.5);
            waitbar(i/N, h)
        end

        delete(h)
    end

    %% Re-calibrate mapped engine model reference

    %Get torque and speed operating points
    SteadyEngSpdCmdPts = getDdData(ddataobjs{2},'PlntEngBrkTrqSpdBpt');
    SteadyTrqCmdPts = getDdData(ddataobjs{2},'PlntEngBrkTrqBpt');

    %Calculate accessory torque so that mapped engine can be "grossed up" to
    %account for the fact that measured torque is brake torque after accessory
    %losses
    AccessoryPowerbp = getDdData(ddataobjs{4},'PlntEngAccPwrTbl');
    AccessorySpeedbp = getDdData(ddataobjs{4},'PlntEngAccSpdBpt');
    BrakeTorqueSpeeds = repmat(SteadyEngSpdCmdPts,length(SteadyTrqCmdPts),1);
    AccessoryPowers = interp1(AccessorySpeedbp,AccessoryPowerbp,BrakeTorqueSpeeds, 'linear', 'extrap');
    AccessoryPowers(AccessoryPowers > max(AccessoryPowerbp)) = max(AccessoryPowerbp);
    AccessoryPowers(AccessoryPowers < min(AccessoryPowerbp)) = min(AccessoryPowerbp);
    AccessoryTorques = 1000.*AccessoryPowers./(BrakeTorqueSpeeds*pi/30); %Note accessory torque offset turned off for now
    AccessoryTorques(BrakeTorqueSpeeds <= 0) = 0;

    GetTableData = @(Name) getMappedEngineTables(ResultsBlkName, SteadyEngSpdCmdPts, SteadyTrqCmdPts, Name, AccessoryTorques);

    %Correct f_tbrake table at zero speed and load conditions
    f_tbrake=GetTableData('Measured engine torque (N*m)')+AccessoryTorques;
    MaxTrqLine = max(f_tbrake, [], 1);
    [~, YY] = meshgrid(SteadyEngSpdCmdPts, SteadyTrqCmdPts);
    f_tbrake(2:end,1)=f_tbrake(2:end, 2);
    f_tbrake(1,1) = 0;
    YY(1,1:end) = f_tbrake(1,1:end);
    f_tbrake = min(YY, repmat(MaxTrqLine, length(SteadyEngSpdCmdPts), 1));

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

    f_texh = GetTableData('Exhaust manifold temperature (C)')+273.15;

    f_eff = max(GetTableData('BSFC (g/(kW*hr))'), 0);

    MappedTables = { 'PlntEngBrkTrqMap', f_tbrake;
        'PlntEngAirFlwMap', f_air;
        'PlntEngFuelFlwMap', f_fuel;
        'PlntEngExhTemp', f_texh;
        'PlntEngBSFCMap', f_eff;
        'PlntEngHCMap', f_hc;
        'PlntEngCOMap', f_co;
        'PlntEngNOxMap', f_nox;
        'PlntEngCO2Map', f_co2;
        'PlntEngPMMap', zeros(size(f_tbrake))};

    for i = 1:size(MappedTables, 1)
        setDdData(ddataobjs{2},MappedTables{i,1},MappedTables{i,2});
    end

    %% Re-calibrate simple engine model reference

    f_tqmax_n_bpt=getDdData(ddataobjs{3},'PlntEngTqMaxBpt');

    [Sbp,Tbp]=meshgrid(SteadyEngSpdCmdPts,SteadyTrqCmdPts);

    maxtqbp=max(SteadyTrqCmdPts)*ones(size(f_tqmax_n_bpt));

    f_tqmax=interp2(Sbp,Tbp,f_tbrake,f_tqmax_n_bpt,maxtqbp);

    % Getting rid of existing NaNs in the tail of max torque
    nrpms = numel(f_tqmax_n_bpt);
    for i=nrpms:-1:1
        if ~isnan(f_tqmax(i))
            lastgoodi = i;
            break;
        end
    end    
    if lastgoodi < nrpms
        pwr = 2*pi*f_tqmax_n_bpt(lastgoodi)/60*f_tqmax(lastgoodi);
        pwrminus = 0.01*pwr;
        for i=lastgoodi+1:nrpms
            pwr = pwr - pwrminus;
            if pwr > 0
                f_tqmax(i) = pwr/(2*pi*f_tqmax_n_bpt(i)/60);
            else
                f_tqmax(i) = 0;
            end
        end
    end

    setDdData(ddataobjs{3},'PlntEngTqMax', f_tqmax);

end

end

%% getMappedEngineTables
function TableZ = getMappedEngineTables(ResultsBlkName, SteadyEngSpdCmdPts, SteadyTrqCmdPts, ZName, AccessoryTorques)
[XX, YY] = meshgrid(SteadyEngSpdCmdPts, SteadyTrqCmdPts);
TableZ = DynoResultsBlock(ResultsBlkName, 'scatteredInterp2', 'Engine speed command (rpm)', XX,'Torque command (N*m)', YY-AccessoryTorques, ZName);
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