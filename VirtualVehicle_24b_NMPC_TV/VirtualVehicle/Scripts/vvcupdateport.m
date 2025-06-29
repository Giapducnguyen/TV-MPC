function vvcupdateport(block,paramName,portLabel,portType)
% Copyright 2023 The MathWorks, Inc.

vvcport(block,paramName{1},portLabel{1}, portType{1},'Inport')
vvcport(block,paramName{2}, portLabel{2}, portType{2},'Outport')
end
%%
function vvcport(block,paramName,portLabel,portType,blockType)
% Copyright 2023 The MathWorks, Inc.
portExists = foundPorts(bdroot(block),portLabel,blockType);
for idx = 1:length(paramName)    
    if strcmp(get_param(block,paramName{idx}),'on') && ~portExists(idx)
        SwitchPort(block, portLabel{idx},blockType,portType{idx})               
    elseif strcmp(get_param(block,paramName{idx}),'off') && portExists(idx)
        if strcmp(blockType,'Inport')
            SwitchPort(block, portLabel{idx},'Constant',portType{idx});
        else
            SwitchPort(block, portLabel{idx},'Terminator',portType{idx});
        end
    end
end
portExists = foundPorts(bdroot(block),portLabel,blockType);
portNum = 0;
for idx = 1:length(paramName)
    if portExists(idx)
        portNum = portNum+1;
        set_param([block, '/', portLabel{idx}], 'Port', num2str(portNum));
        portSize = [0 0 30 14];
        blockLoc = get_param(block,'Position');
        if strcmp(blockType,'Inport')
            horOff = -60;
            verOff = 32;
            set_param([bdroot(block) '/' portLabel{idx}],'Position',portSize+[blockLoc(1:2) blockLoc(1:2)]+[horOff (portNum-1)*verOff horOff (portNum-1)*verOff]);
        else
            horOff = 100;
            verOff = 30;
            set_param([bdroot(block) '/' portLabel{idx}],'Position',portSize+[blockLoc(1:2) blockLoc(1:2)]+[horOff (portNum)*verOff horOff (portNum)*verOff]);
        end
    end
end
end
%%
function portExists = foundPorts(mdl,portLabel, blockType)
portExists = boolean(zeros(length(portLabel),1));
found_blocks = find_system(mdl, 'SearchDepth', 1, 'BlockType', blockType);
for idx = 1:length(portExists)
    for ijx = 1:length(found_blocks)
        if strcmp(get_param(found_blocks{ijx}, 'Name'), portLabel{idx})
            portExists(idx) = true;
        end
    end
end
end
%%
function SwitchPort(Block, PortName, UsePort,Param)
PortOption  = {'built-in/Constant', [PortName 'Constant'];...
    'built-in/Inport', PortName;...
    'simulink/Sinks/Terminator',[PortName 'Terminator'];...
    'simulink/Sinks/Out1', PortName;...
    'built-in/Ground',[PortName 'Ground']};
switch UsePort
    case 'Constant'
        maskedBlkHdl = autoblksreplaceblock(Block, PortOption, 1);
        set_param(maskedBlkHdl, 'Value','0','OutDataTypeStr',['Bus: ' Param]);
        try
            lineH = get_param( [bdroot(Block) '/' PortName],'LineHandles');
            delete_line(lineH.Outport(1));
            delete_block( [bdroot(Block) '/' PortName]);
        catch            
        end
    case 'Terminator'
        autoblksreplaceblock(Block, PortOption, 3);
        try
            lineH = get_param( [bdroot(Block) '/' PortName],'LineHandles');
            delete_line(lineH.Inport(1));
            delete_block( [bdroot(Block) '/' PortName]);
        catch            
        end
    case 'Outport'
        autoblksreplaceblock(Block, PortOption, 4);
        sysName = bdroot(Block);       
        add_block('built-in/Outport', [bdroot(Block) '/' PortName]);  
        add_line(sysName,[regexprep(Block, [sysName '/'], '') '/1'],[PortName '/1'], 'autorouting', 'on');
    case 'Inport'
        maskedBlkHdl = autoblksreplaceblock(Block, PortOption, 2);
        set_param(maskedBlkHdl,'OutDataTypeStr',['Bus: ' Param],'Port','1');
        sysName = bdroot(Block);       
        add_block('built-in/Inport', [bdroot(Block) '/' PortName]);  
        set_param([sysName '/' PortName],'OutDataTypeStr',['Bus: ' Param],'BusOutputAsStruct','on');
        add_line(sysName,[PortName '/1'], [regexprep(Block, [sysName '/'], '') '/1'], 'autorouting', 'on');
    case 'Ground'
        autoblksreplaceblock(Block, PortOption, 5);
end
end