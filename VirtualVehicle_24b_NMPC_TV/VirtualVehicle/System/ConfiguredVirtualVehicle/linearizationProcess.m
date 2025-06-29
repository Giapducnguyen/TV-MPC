
% % % System parameters
% m  = 1623;          % [kg]           % vehicle mass
% Iz = 2066;          % [kg m^2]       % yaw moment of inertia
% lf = 1.09;          % [m]            % distance from c.o.g. to front axle
% lr = 1.7;           % [m]            % distance from c.o.g. to rear axle
% lw = 1.575;         % [m]            % track width
% rw = 0.309;         % [m]            % wheel radius
% h  = 0.609;         % [m]            % distance from c.o.g. to ground
% g  = 9.81;          % [m/s^2]        % gravitational acceleration
% 
% % % Tires' magic formula coefficients
% D = 1.0;    % []            % peak factor scale
% C = 1.1;    % []            % shape factor
% E = 1.2;    % []            % curvature factor

% EMWhlGearRatio = 0.98*4.1; % (wheel torque = efficiency * 4.1 * motor torque)

syms xk Acc uk [2 1] real
syms Vx delta EMFrntTrq mu real

% continuous-time nonlinear dynamics
f_veh = getVehicleDynamics(xk, uk, EMFrntTrq, Vx, delta, Acc, mu);

% gradients with respect to state and control 
gradfx = jacobian(f_veh, xk);
gradfu = jacobian(f_veh, uk);

% save gradients as files
matlabFunction(gradfx, "File", "A_","Vars",{xk, Vx, delta, Acc, mu},"Optimize",true,"Sparse",false);
matlabFunction(gradfu, "File", "B_","Vars",{delta},"Optimize",true,"Sparse",false);

%% Helper functions

function dxdt = getVehicleDynamics(xk, uk, EMFrntTrq, Vx, delta, Acc, mu)

% % System parameters
m  = 1623;          % [kg]           % vehicle mass
Iz = 2066;          % [kg m^2]       % yaw moment of inertia
lf = 1.09;          % [m]            % distance from c.o.g. to front axle
lr = 1.7;           % [m]            % distance from c.o.g. to rear axle
lw = 1.575;         % [m]            % track width
rw = 0.309;         % [m]            % wheel radius

EMWhlGearRatio = 0.98*4.1; % (wheel torque = efficiency * final gear * motor torque)

% Get lateral forces
[Fy, ~] = getForces(xk, Vx, delta, Acc, mu);
Fy_FL = Fy(1); Fy_FR = Fy(2); Fy_RL = Fy(3); Fy_RR = Fy(4);

% % Continuous-time dynamics
dxdt = [( (EMFrntTrq*EMWhlGearRatio/rw)*sin(delta) + (Fy_FL+Fy_FR)*cos(delta) + Fy_RL + Fy_RR)/m - Vx*xk(2);
        ( ( (EMFrntTrq*EMWhlGearRatio/rw)*sin(delta) + (Fy_FL+Fy_FR)*cos(delta) )*lf ...
            + ( (uk(1)*EMWhlGearRatio/rw)*cos(delta) + (Fy_FL-Fy_FR)*sin(delta) )*lw/2 ...
            + (uk(2)*EMWhlGearRatio/rw)*lw/2 - (Fy_RL+Fy_RR)*lr)/Iz ];

end

function [Fy, Fz] = getForces(xk, Vx, delta, Acc, mu)
% % System parameters
m  = 1623;          % [kg]           % vehicle mass
lf = 1.09;          % [m]            % distance from c.o.g. to front axle
lr = 1.7;           % [m]            % distance from c.o.g. to rear axle
lw = 1.575;         % [m]            % track width
h  = 0.609;         % [m]            % distance from c.o.g. to ground
g  = 9.81;          % [m/s^2]        % gravitational acceleration

% % Tires' magic formula coefficients
D = 1.0;    % []            % peak factor scale
C = 1.1;    % []            % shape factor
E = 1.2;    % []            % curvature factor

% % Compute Vertical Loads
Fz_FL = 0.5*( m*g*lr/(lf+lr) - m*Acc(1)*h/(lf+lr) - m*-Acc(2)*h*lr/(lw*(lf+lr)) );
Fz_FR = 0.5*( m*g*lr/(lf+lr) - m*Acc(1)*h/(lf+lr) + m*-Acc(2)*h*lr/(lw*(lf+lr)) );
Fz_RL = 0.5*( m*g*lf/(lf+lr) + m*Acc(1)*h/(lf+lr) - m*-Acc(2)*h*lf/(lw*(lf+lr)) );
Fz_RR = 0.5*( m*g*lf/(lf+lr) + m*Acc(1)*h/(lf+lr) + m*-Acc(2)*h*lf/(lw*(lf+lr)) );
Fz = [Fz_FL; Fz_FR; Fz_RL; Fz_RR];

% Compute wheel side slip angles
[a_FL,a_FR,a_RL,a_RR] = getTireSlipAng(xk, Vx, delta);

% % Lateral forces
Fy = [ mu*D*Fz_FL*sin( C*atan( ( 4E4/(mu*D*Fz_FL)  ) *a_FL - E*( ( 4E4/(mu*D*Fz_FL)  ) *a_FL - atan( ( 4E4/(mu*D*Fz_FL)  ) *a_FL ) ) ) );
       mu*D*Fz_FR*sin( C*atan( ( 4E4/(mu*D*Fz_FR)  ) *a_FR - E*( ( 4E4/(mu*D*Fz_FR)  ) *a_FR - atan( ( 4E4/(mu*D*Fz_FR)  ) *a_FR ) ) ) );
       mu*D*Fz_RL*sin( C*atan( ( 4E4/(mu*D*Fz_RL)  ) *a_RL - E*( ( 4E4/(mu*D*Fz_RL)  ) *a_RL - atan( ( 4E4/(mu*D*Fz_RL)  ) *a_RL ) ) ) );
       mu*D*Fz_RR*sin( C*atan( ( 4E4/(mu*D*Fz_RR)  ) *a_RR - E*( ( 4E4/(mu*D*Fz_RR)  ) *a_RR - atan( ( 4E4/(mu*D*Fz_RR)  ) *a_RR ) ) ) )    ];

end

function [a_FL,a_FR,a_RL,a_RR] = getTireSlipAng(xk, Vx, delta)
% % System parameters
lf = 1.09;          % [m]            % distance from c.o.g. to front axle
lr = 1.7;           % [m]            % distance from c.o.g. to rear axle
lw = 1.575;         % [m]            % track width

% a_FL = -atan2((xk(1) + xk(2)*lf),(Vx - xk(2)*lw/2)) + delta;        % front-left
% a_FR = -atan2((xk(1) + xk(2)*lf),(Vx + xk(2)*lw/2)) + delta;        % front-right
% a_RL = -atan2((xk(1) - xk(2)*lr),(Vx - xk(2)*lw/2));                     % rear-left
% a_RR = -atan2((xk(1) - xk(2)*lr),(Vx + xk(2)*lw/2));                     % rear-right

a_FL = -atan((xk(1) + xk(2)*lf)/(Vx - xk(2)*lw/2)) + delta;        % front-left
a_FR = -atan((xk(1) + xk(2)*lf)/(Vx + xk(2)*lw/2)) + delta;        % front-right
a_RL = -atan((xk(1) - xk(2)*lr)/(Vx - xk(2)*lw/2));                     % rear-left
a_RR = -atan((xk(1) - xk(2)*lr)/(Vx + xk(2)*lw/2));                     % rear-right

end