function DynamometerStart(Block, Mode)
%
% Copyright 2016-2024 The MathWorks, Inc.

%% Setup
ModelName = bdroot(Block);
DynoCtrlBlk = [ModelName,'/Dynamometer Control'];
ResultsBlkName = [ModelName,'/Performance Monitor'];
nomsk = endsWith(Mode,'NoMsk');
if nomsk
    Mode = erase(Mode,'NoMsk');
end

%% Set variant
switch Mode
    case 'CalThrWg'
        set_param(DynoCtrlBlk, 'LabelModeActiveChoice', 'CalThrWg');
        set_param(DynoCtrlBlk, 'BackgroundColor', 'magenta');
    case 'Dynamic'
        set_param(DynoCtrlBlk, 'LabelModeActiveChoice', 'Dynamic');
        set_param(DynoCtrlBlk, 'BackgroundColor', 'cyan');
    case 'SteadyState'
        set_param(DynoCtrlBlk, 'LabelModeActiveChoice', 'SteadyState');
        set_param(DynoCtrlBlk, 'BackgroundColor', 'green');
    case 'CalCtrl'
        set_param(DynoCtrlBlk, 'LabelModeActiveChoice', 'CalCtrl');
        set_param(DynoCtrlBlk, 'BackgroundColor', 'magenta');
end

%% Run simulation
pause(0.01)
mdlin = Simulink.SimulationInput(ModelName);
sistsimout = 'SteadyDynoSimOut';
sidynsimout = 'DynamicDynoSimOut';
cistsimout = 'CISteadyDynoSimOut';
cidynsimout = 'CIDynamicDynoSimOut';
mskparmname = 'SteadyWsVarName';
modename = 'CalThrWg';
mskparm = sistsimout;
setsimout % SI Eng Static Results
mskparmname = 'DynWsVarName';
mskparm = sidynsimout;
setsimout % SI Eng Dynamic Results
mskparmname = 'SteadyWsVarName';
modename = 'CalCtrl';
mskparm = cistsimout;
setsimout % CI Eng Static Results
mskparmname = 'DynWsVarName';
mskparm = cidynsimout;
setsimout % CI Eng Dynamic Results
if nomsk
    % Run resize
    out = sim(mdlin);    
    if strcmp(Mode,'CalThrWg') % SI Engines
        isspki = true;
        stsimout = sistsimout;
        dynsimout = sidynsimout;
        setoutp
        RecalibrateSIController(ResultsBlkName,'ApplyCalNoMsk')
    elseif strcmp(Mode,'CalCtrl') % CI Engines
        isspki = false;
        stsimout = cistsimout;
        dynsimout = cidynsimout;
        setoutp
        RecalibrateCIController(ResultsBlkName,'ApplyCalNoMsk')
    end
    % Run SteadyState
    set_param(DynoCtrlBlk, 'LabelModeActiveChoice', 'SteadyState');
    out = sim(mdlin);
    if isspki
        stsimout = sistsimout;
        dynsimout = sidynsimout;
    else
        stsimout = cistsimout;
        dynsimout = cidynsimout;
    end
    setoutp
else
    h = waitbar(0.5, 'Rebuilding models, please wait...');
    h.Tag = 'RebuildModelWaitbarFig';
    if strcmp(Mode,'CalThrWg') % SI Engines
        isspk = true;
        stsimout = sistsimout;
        dynsimout = sidynsimout;
        run1st
    elseif strcmp(Mode,'CalCtrl') % CI Engines
        isspk = false;
        stsimout = cistsimout;
        dynsimout = cidynsimout;
        run1st
    end
    set_param(ModelName, 'SimulationCommand', 'start');
    h = findall(0, 'Type', 'figure', 'Tag', 'RebuildModelWaitbarFig');
    if ~isempty(h)
        delete(h(1))
    end
end
    function setsimout
        if strcmp(Mode,modename) && ...
                ~strcmp(get_param(ResultsBlkName,mskparmname),mskparm)
            set_param(ResultsBlkName,mskparmname,mskparm);
        end
    end
    function setoutp
        assignin('base',stsimout,get(out,stsimout));
        assignin('base',dynsimout,get(out,dynsimout));
    end
    function run1st
        NoPlot0 = get_param(ResultsBlkName,'NoPlot');
        if endsWith(NoPlot0,'0')
            set_param(ResultsBlkName,'NoPlot',replace(NoPlot0,'0','1'))
        end
        out = sim(mdlin);
        set_param(ResultsBlkName,'NoPlot',NoPlot0)
        setoutp
        if isspk
            RecalibrateSIController(ResultsBlkName,'ApplyCal')
        else
            RecalibrateCIController(ResultsBlkName,'ApplyCal')
        end
        set_param(DynoCtrlBlk, 'LabelModeActiveChoice', 'SteadyState')
    end
end