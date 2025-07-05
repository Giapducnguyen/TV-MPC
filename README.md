# TV-MPC
**Model Predictive Control for Torque Vectoring in Electric Vehicles**

This repository contains an implementation of Model Predictive Control (MPC) for addressing the torque vectoring problem in four-wheel-drive electric vehicles (EVs).

## Overview
The project is built around a lightweight passenger EV model generated using Virtual Vehicle Composer, which is then exported to Simulink. The control architecture focuses on torque distribution among the four wheels to enhance handling, stability, and safety.

MPC-based controllers are implemented as selectable variants within the Torque Vectoring (TV) subsystem of the Vehicle Control Unit. These MPC variants are intended as performance-enhancing alternatives to the built-in PI controllers provided by MATLAB.

## Control Formulation
The MPC variants solve an Optimal Control Problem (OCP) formulated using a reduced-order vehicle planar dynamics model. The key characteristics of this model include:
- **State reduction**: From 3 states (longitudinal/lateral velocity, yaw rate) to 2 (lateral velocity, yaw rate)
- **Input simplification**: From 4 individual wheel torques (front-left, front-right, rear-left, rear-right) to 2 torque difference signals: front torque difference (front-right − front-left) and rear torque difference (rear-right − rear-left)
- **Modularity**: Exploits front-rear torque distribution provided by the Energy Management block upstream of the TV module

The reduced complexity enables faster prototyping while retaining control effectiveness. The OCP is solved using MATLAB’s `fmincon`, a general-purpose nonlinear optimization solver.

The detailed OCP formulation is provided in the accompanying PDF in this repository.

## Control Variants
- **Nonlinear MPC**: Based on the full nonlinear vehicle dynamics model
- **Linear Time-Varying (LTV) MPC**: A simplified linearized variant. It shows significant reduction in computation time compared to the nonlinear MPC.

## How to Run
1. Open the Simulink project: VirtualVehicle_24b_NMPC_TV/VirtualVehicle/VirtualVehicle.prj
2. Open the main simulation model: VirtualVehicle_24b_NMPC_TV/VirtualVehicle/System/ConfiguredVirtualVehicle/ConfiguredVirtualVehicleModel.slx
3. Select a driving scenario and choose the desired torque vectoring control variant.  
4. Run the simulation and tune key parameters (prediction/control horizons, objective weights, ...) to achieve desired performance.
