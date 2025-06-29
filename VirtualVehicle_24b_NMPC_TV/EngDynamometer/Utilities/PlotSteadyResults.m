function PlotSteadyResults(SimOutData, SignalNames, XName, YName, ZName)
% Function plots steady state results logged during simulation.
%
%
% Copyright 2016-2022 The MathWorks, Inc.
%% Setup
XData = SimOutData(:, strcmp(SignalNames, XName));
switch nargin
    case 3
        YData = [];
        ZData = [];
    case 4
        YData = SimOutData(:, strcmp(SignalNames, YName));
        ZData = [];
    case 5
        YData = SimOutData(:, strcmp(SignalNames, YName));
        ZData = SimOutData(:, strcmp(SignalNames, ZName));
end

namfig = 'SS Results';
if ~isempty(findobj('Name',namfig))
    close('Name',namfig)
end
figure('NumberTitle','off','Name',namfig,'WindowStyle', 'Docked')
TitleInfo = '';
%% Create plot
if isempty(ZData) && isempty(YData)
    %% X plot
    plot(1:length(XData), XData, '.', 'MarkerSize',15)
    xlabel('Operating point number')
    ylabel(XName)
elseif isempty(ZData)
    %% XY plot  
    plot(XData, YData, '.', 'MarkerSize',15)
    xlabel(XName)
    ylabel(YName)
else
    %% Plot XYZ
    if all(diff(XData) == 0)
        plot(YData, ZData, '.', 'MarkerSize',15)
        xlabel(YName)
        ylabel(ZName)  
        TitleInfo = sprintf(' (%s = %g)', XName, XData(1));
    elseif all(diff(YData) == 0)
        plot(XData, ZData, '.', 'MarkerSize',15)
        xlabel(XName)
        ylabel(ZName)  
        TitleInfo = sprintf(' (%s = %g)', YName, YData(1));
    elseif all(diff(ZData) == 0) 
        plot(XData, YData, '.', 'MarkerSize',15)
        xlabel(XName)
        ylabel(YName)  
        TitleInfo = sprintf(' (%s = %g)', ZName, ZData(1));
    else
        xlin = linspace(min(XData),max(XData),50);
        ylin = linspace(min(YData),max(YData),50);
        [X,Y] = meshgrid(xlin, ylin);
        Z = fitlookupn({xlin, ylin}, [XData, YData], ZData, .01);
        Z = Z';
        plot3(XData, YData, ZData, '.', 'MarkerSize',15)
        hold on
        surf(X,Y,Z)
        hold off
        xlabel(XName)
        ylabel(YName)
        zlabel(ZName)        
    end
    
end
grid on
title(['Dynamometer Steady State Results', TitleInfo])