function varargout = GenerateMappedEngineCalibrations(varargin)
%% Setup

% Copyright 2018-2021 The MathWorks, Inc.
Block = varargin{1};
isMBCInstalled = CheckMBCLicense(Block);
varargout{1} = [];
if isMBCInstalled || strcmp('SpreadsheetFileNameSelect', varargin{2})
    switch varargin{2}
        case 'SpreadsheetFileNameSelect'
            SpreadsheetFileNameSelect(Block);
        case 'GenMappedEngCalButton'
            GenMappedEngCalButton(Block);
        case 'CheckMBCLicense'
            CheckMBCLicense(Block);
        case 'OpenMBCFiles'
            OpenMBCFiles(Block);
        case 'Init'
            CheckMBCLicense(Block);
        case 'UpdateParentIcon'
            UpdateParentIcon(Block)
        case 'EnableCalToolButton'
            EnableCalToolButton(Block)
    end
end
end

%% ExcelFileNameSelect
function SpreadsheetFileNameSelect(Block)
parnam = 'SpreadsheetFileName';
datafile = get_param(Block,parnam);
if exist(datafile,'file') == 2
    [filepath,~,~] = fileparts(which(datafile));
    if ~strcmp(filepath,pwd)
        cd(filepath)
    end
end
[fileName,~] = uigetfile({'*.xlsx;*.xls;*.csv'});
if ~ischar(fileName)
    return;
end
set_param(Block,parnam,fileName);
end

%% GenMappedEngCalButton
function GenMappedEngCalButton(Block)
MaskObj = get_param(strcat(bdroot(Block),'/Subsystem5'),'MaskObject');
MappedEngMdlRefName = MaskObj.getParameter('MappedEngMdlRefName').Value;
isSI = strcmp(MappedEngMdlRefName, 'SiMappedEngine');
datafile = MaskObj.getParameter('SpreadsheetFileName').Value;
wkspvarnam = MaskObj.getParameter('MbcTaskList').Value;
SIMappedEngineBlockParamNames={...
    'Breakpoints for commanded torque input,f_tbrake_t_bpt(Nm)', ...
    'f_tbrake_t_bpt','PlntEngBrkTrqBpt';...
    'Breakpoints for engine speed input,f_tbrake_n_bpt(rpm)', ...
    'f_tbrake_n_bpt','PlntEngBrkTrqSpdBpt';...
    'Brake torque map,f_tbrake(Nm)','f_tbrake','PlntEngBrkTrqMap';...
    'Air mass flow map,f_air(kg/s)','f_air','PlntEngAirFlwMap';...
    'Fuel flow map,f_fuel(kg/s)','f_fuel','PlntEngFuelFlwMap';...
    'Exhaust temperature map,f_texh(K)','f_texh','PlntEngExhTemp';...
    'BSFC map,f_eff(g/Kwh)','f_eff','PlntEngBSFCMap';...
    'EO HC map,f_hc(kg/s)','f_hc','PlntEngHCMap';...
    'EO CO map,f_co(kg/s)','f_co','PlntEngCOMap';...
    'EO NOx map,f_nox(kg/s)','f_nox','PlntEngNOxMap';...
    'EO CO2 map,f_co2(kg/s)','f_co2','PlntEngCO2Map';...
    'EO PM map,f_pm(kg/s)','f_pm','PlntEngPMMap'};
CIMappedEngineBlockParamNames={...
    'Breakpoints for commanded fuel mass input,f_tbrake_f_bpt(Nm)', ...
    'f_tbrake_f_bpt','PlntEngCIBrkTrqFuelBpt';...
    'Breakpoints for engine speed input,f_tbrake_n_bpt(rpm)', ...
    'f_tbrake_n_bpt','PlntEngCIBrkTrqSpdBpt';...
    'Brake torque map,f_tbrake(Nm)','f_tbrake','PlntEngCIBrkTrqMap';...
    'Air mass flow map,f_air(kg/s)','f_air','PlntEngCIAirFlwMap';...
    'Fuel flow map,f_fuel(kg/s)','f_fuel','PlntEngCIFuelFlwMap';...
    'Exhaust temperature map,f_texh(K)','f_texh','PlntEngCIExhTemp';...
    'BSFC map,f_eff(g/Kwh)','f_eff','PlntEngCIBSFCMap';...
    'EO HC map,f_hc(kg/s)','f_hc','PlntEngCIHCMap';...
    'EO CO map,f_co(kg/s)','f_co','PlntEngCICOMap';...
    'EO NOx map,f_nox(kg/s)','f_nox','PlntEngCINOxMap';...
    'EO CO2 map,f_co2(kg/s)','f_co2','PlntEngCICO2Map';...
    'EO PM map,f_pm(kg/s)','f_pm','PlntEngCIPMMap'};
if isSI
    mbcfuncnam = 'autolibsimappedengine';
    mapengblk = 'Mapped SI Engine';
    BlockParamNames = SIMappedEngineBlockParamNames;
    engfile = 'SiMappedEngine';
else
    mbcfuncnam = 'autolibcimappedengine';
    mapengblk = 'Mapped CI Engine';
    BlockParamNames = CIMappedEngineBlockParamNames;
    engfile = 'CiMappedEngine';
end
if exist(datafile,'file') == 2
    [filepath,~,~] = fileparts(which(datafile));
else
    filepath=[];
end

% Set mapped engine variant
engsys = strcat(bdroot(Block),'/Engine System');
engplant = strcat(engsys,'/Engine Plant/Engine');
if isSI && ~strcmp(get_param(engplant,'ActiveVariant'),'SI Mapped Engine')
    set_param(engplant,'LabelModeActiveChoice','SI Mapped Engine')
end
if ~isSI && ~strcmp(get_param(engplant,'ActiveVariant'),'CI Mapped Engine')
    set_param(engplant,'LabelModeActiveChoice','CI Mapped Engine')
end
% Start cal from data app
MappedEngineBlock=strcat(engplant,'/', ...
    get_param(engplant,'ActiveVariant'),'/',mapengblk);

hwb = waitbar(0,'Calibrating from data, please wait');
waitbar(0.1,hwb);

cd(filepath);

try
    out = autosharedicon(mbcfuncnam,MappedEngineBlock, ...
        'CalMapsButtonCallback',true);
    if ~isSI
        out=out.ChildTasks;
    end
catch ME
    errordlg(ME.message,'Run MBC error','replace');
    return;
end

TaskList=out.ChildTasks;
% Export TaskList = mbctasklist to base wksp
assignin('base',wkspvarnam,TaskList)

TaskComplete=zeros(1,4);
ChildrenTaskList={'Importing Firing Data','Importing NonFiring Data', ...
    'Generating Response Models','Generating Calibration', ...
    'Updating Block Parameters'};

for i=1:length(TaskList)
    try
        waitbar(0.2*i,hwb,ChildrenTaskList{i});

        if i<3
            filename=fullfile(filepath,datafile);
            TaskList(i).TaskFcn(filename);
            TaskList(i).GetStatusFcn();
        elseif i==length(TaskList)
            out=TaskList(i).TaskFcn(true);
            TaskList(i).GetStatusFcn(true);
            TaskList(i).Completed=1;
        else
            TaskList(i).TaskFcn();
            TaskList(i).GetStatusFcn();
        end


        if ~TaskList(i).Completed || ~isempty(TaskList(i).ErrorMsg) || ...
                ~isempty(TaskList(i).WarningMsg)
            TaskComplete(i)=0;
            break;
        else
            TaskComplete(i)=1;
        end

    catch ME
        errordlg(ME.message,'Run MBC Tasks error','replace');
        break;
    end

end

if all(TaskComplete)
    BlockParams=out;
    bpt = zeros(1,length(out.ParamNames));
    for i=1:length(out.ParamNames)
        name=out.ParamNames{i};
        index=find(strcmp(name,BlockParamNames(:,2)),1);
        if ~isempty(index)
            BlockParams.ParamNames{i}=BlockParamNames{index,3};
        end
        if size(out.ParamValues{i},1)==1 || size(out.ParamValues{i},2)==1
            bpt(i)=i;
        end
    end
    bpt = bpt(bpt~=0);
    save_system(engfile,'OverwriteIfChangedOnDisk',true, ...
        'SaveDirtyReferencedModels',true);
    PlotCalibratedMap
    EnableCalToolButton(Block)
    % Mapped by MBC Tagging
    set_param(MappedEngineBlock, 'Tag', 'MappedEngCalByMBC')
    set_param(engsys,'Position',get_param(engsys,'Position'))
    % Run Run simulation
    DynamometerStart(gcb, 'SteadyState')
else
    index=find(~TaskComplete);
    if index(1)==1
        msg='Please select engine data compatible with firing mode.';
    elseif index(1)==2
        msg='Please select engine data compatible with non-firing mode.';
    else
        msg=[ChildrenTaskList{index(1)} ' failed!'];
    end

    errordlg(msg);
end

waitbar(1,hwb);
close(hwb);

    function PlotCalibratedMap
        if length(bpt)~=2
            return;
        end

        bp1=BlockParams.ParamValues{bpt(1)};
        bp2=BlockParams.ParamValues{bpt(2)};
        f=0;

        for j=1:length(BlockParams.ParamNames)
            if j==bpt(1)||j==bpt(2)
                continue;
            end

            f=f+1;

            h=figure(f);
            set(h,'Name',BlockParams.ParamNames{j},'NumberTitle','off', ...
                'WindowStyle', 'Docked');
            [X,Y]=ndgrid(bp1,bp2);
            surf(X,Y,BlockParams.ParamValues{j});
            xlabel(BlockParams.ParamNames{bpt(1)},'Interpreter', 'none');
            ylabel(BlockParams.ParamNames{bpt(2)},'Interpreter', 'none');
            zlabel(BlockParams.ParamNames{j},'Interpreter', 'none');

            drawnow();
        end
    end
end

%% OpenMBCFiles
function OpenMBCFiles(Block)
MaskObj = Simulink.Mask.get(Block);
wkspvarnam = MaskObj.getParameter('MbcTaskList').Value;
inappname='f_tbrake';
isthere = evalin('base',['exist(','''',wkspvarnam,''',''var'') == 1']);
if isthere
    TaskList = evalin('base',['',wkspvarnam,'']);
else
    warning('No MBC task list in base workspace!');
    return;
end
try
    if ~isempty(TaskList(end).BaseMbcProject.WorkDir)
        cd(TaskList(end).BaseMbcProject.WorkDir);
    end
    TaskList(end-2).ViewChildInApp(inappname);
catch
    warning('Invalid MBCMODEL project!');
end
try
    if ~isempty(TaskList(end).BaseCageProject.WorkDir)
        cd(TaskList(end).BaseCageProject.WorkDir);
    end
    TaskList(end-1).ViewChildInApp(inappname);
catch
    warning('Invalid CAGE project!');
end
end

%% EnableCalToolButton
function EnableCalToolButton(Block)
MaskObj = Simulink.Mask.get(Block);
OpenCalToolButton = MaskObj.getDialogControl('OpenCalToolButton');
wkspvarnam = MaskObj.getParameter('MbcTaskList').Value;
isthere = evalin('base',['exist(','''',wkspvarnam,''',''var'') == 1']);
if isthere
    OpenCalToolButton.Enabled = 'on';
else
    OpenCalToolButton.Enabled = 'off';
end
end

%% CheckMBCLicense
function isMBCInstalled = CheckMBCLicense(Block)
MaskObj = Simulink.Mask.get(Block);  
GenMappedEngCalButton = MaskObj.getDialogControl('GenMappedEngCalButton');
MBCIconImg = MaskObj.getDialogControl('MBCIconImg');

if license('test', 'MBC_Toolbox')
    GenMappedEngCalButton.Enabled = 'on';
    MBCIconImg.Enabled = 'on';
    MBCIconImg.Visible = 'on';
    isMBCInstalled = true;   
else
    GenMappedEngCalButton.Enabled = 'off';
    MBCIconImg.Enabled = 'off';
    MBCIconImg.Visible = 'off';
    isMBCInstalled = false;
end

end
