function autoblkVVCSetManType()

%   Copyright 2024 The MathWorks, Inc.

block=gcb;
simstopped = autoblkschecksimstopped(block);
if ~simstopped
    return;
end
maskobj = Simulink.Mask.get(block);

maneuver=maskobj.Parameters(2);
dcsource=maskobj.Parameters(3);
engine3d=maskobj.Parameters(4);
driver=maskobj.Parameters(5);
plantmodel=get_param([bdroot(block),'/Vehicle'],'LabelModeActiveChoice');
chassis=get_param([bdroot(block),'/Vehicle/',plantmodel,'/Vehicle Body/Vehicle'],'LabelModeActiveChoice');

lateral=strcmp(chassis,'VehicleBody6DOF');

if lateral
    driveritems={'Longitudinal Driver','Predictive Stanley Driver'};
else
    driveritems={'Longitudinal Driver'};
end

switch maneuver.Value
    case 'Drive Cycle'
        dcsource.set('Enabled','on','Visible','on');
        %set maneuver
        dcsource.Prompt='Drive cycle source:';
        if exist('drivecycledata','dir')==7
            items=VirtualAssembly.getcyclename('');
        else
            items={'FTP75'};
        end

        dcsource.set('TypeOptions',items,'Value',items{1});

        %set driver
        driver.set('TypeOptions',driveritems,'Value',driveritems{1});

    case 'Wide Open Throttle'
        dcsource.set('Enabled','on','Visible','on');
        dcsource.Prompt='Drive cycle source:';
        dcsource.set('TypeOptions','Wide Open Throttle (WOT)','Value','Wide Open Throttle (WOT)');

        %set driver
        driver.set('TypeOptions',driveritems,'Value',driveritems{1});

    case {'Double Lane Change','Constant Radius'}
        dcsource.set('Enabled','off','Visible','off');
        %set engine 3d
        engine3d.set('Enabled','on');
        driver.set('TypeOptions',{'Predictive Stanley Driver'},'Value','Predictive Stanley Driver');
    otherwise
        dcsource.set('Enabled','off','Visible','off');
        engine3d.set('Enabled','on');
        driver.set('TypeOptions',{'Predictive Driver'},'Value','Predictive Driver');
end
end