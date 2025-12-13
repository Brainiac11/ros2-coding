# Arm Path Maker - MoveIt2 Integration

This package provides a ROS2 action server that controls the Panda robotic arm to follow sine curve paths using MoveIt2.

## Overview

The `arm_path_maker` node:
- Accepts action goals with start/end points and sine curve parameters
- Generates waypoints along a sine curve using the `SineInterpolationPath` class
- Uses MoveIt2's Cartesian path planning to move the Panda arm along the curve
- Returns the executed joint trajectory

## Dependencies

- ROS2 Jazzy
- MoveIt2
- `panda_moveit_config` package
- `human_interfaces` package (for the GaitPath action)

## Building

```bash
cd /workspaces/ros2-coding/turtlesim_ws
colcon build --packages-select human_controller
source install/setup.bash
```

## Usage

### 1. Launch the system

This will start MoveIt2 with the Panda arm and the arm_path_maker action server:

```bash
ros2 launch human_controller arm_sine_path.launch.py
```

This launches:
- MoveIt2 with the Panda arm (using mock hardware)
- RViz for visualization
- The `arm_path_maker` action server

### 2. Send a test goal

In a new terminal, run the test client:

```bash
source /workspaces/ros2-coding/turtlesim_ws/install/setup.bash
ros2 run human_controller test_arm_sine_client
```

This will send a sine curve path goal to the action server. The Panda arm should move along a sine curve path in RViz.

### 3. Customize the path

Edit the parameters in `test_arm_sine_client.py`:

```python
start_point = [0.3, -0.2, 0.4]  # x, y, z in meters
end_point = [0.3, 0.2, 0.4]     # x, y, z in meters
height = 0.1                     # Sine curve height in meters
num_points = 50                  # Number of waypoints
```

## Action Interface

**Action Type:** `human_interfaces/action/GaitPath`

**Goal:**
- `start_point` (float64[]): Starting [x, y, z] position (only x, y used for sine curve)
- `end_point` (float64[]): Ending [x, y, z] position (z used for all waypoints)
- `height` (float64): Height/amplitude of the sine curve
- `interpolation_time_count` (int32): Number of waypoints to generate
- `is_reversed` (bool): Whether to reverse the path direction

**Result:**
- `joint_angles` (Float64MultiArray[]): Array of joint configurations executed

**Feedback:**
- `partial_joint_angles` (Float64MultiArray[]): Progress updates during execution

## Code Structure

- `arm_path_maker.py`: Main action server node
  - Initializes MoveItPy with the Panda arm
  - Generates sine curve waypoints
  - Plans and executes Cartesian paths
  
- `SineCurveInterpolationPath.py`: Generates equally-spaced points along a sine curve
  
- `test_arm_sine_client.py`: Example client to test the action server

- `arm_sine_path.launch.py`: Launch file to start everything

## Notes

- The node uses Cartesian path planning, which may not always find a 100% solution if the path goes outside the robot's workspace or encounters singularities
- Adjust the `start_point`, `end_point`, and `height` parameters to stay within the Panda arm's reachable workspace
- The z-coordinate from the start_point is used for all waypoints (the sine curve is in the x-y plane)
- The end-effector maintains a constant orientation (pointing downward)

## Troubleshooting

**"Could only plan X% of the path":**
- The requested path may be outside the robot's workspace
- Try reducing the sine curve height
- Adjust start/end points closer to the robot

**"Failed to get planned trajectory":**
- MoveIt could not find a valid path
- Check that MoveIt is properly initialized with `ros2 topic list | grep move_group`

**Import errors:**
- Ensure you've sourced the workspace: `source install/setup.bash`
- Rebuild if needed: `colcon build --packages-select human_controller`
