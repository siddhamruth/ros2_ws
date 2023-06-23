#!/bin/bash

source /opt/ros/foxy/setup.bash

# Launch joy_simulator node
ros2 run delbot_controller joy_simulator &

# Wait for the joy_simulator node to start
sleep 2

# Launch joy_controller node
ros2 run delbot_controller joy_controller

# chmod +x start_delbot_controller.sh