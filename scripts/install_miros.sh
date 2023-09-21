#! /bin/bash

# VARIABLES:
# ----------
DIRECTORY="microros_ws"
ENV_SETUP="setup.bash"

# 1. check if directory exists:
if [ ! -d "$DIRECTORY" ]; then
  echo "$DIRECTORY does not exist. Creating"
  mkdir $DIRECTORY
else
  echo "$DIRECTORY does exist."
fi

# 2. enter the directory
cd $DIRECTORY
pwd

# Source the ROS 2 installation
if [ -e /opt/ros/$ROS_DISTRO/setup.bash ]; then
  echo "setup.bash found at path 1"
  source /opt/ros/$ROS_DISTRO/setup.bash
elif [ -e /opt/ros/$ROS_DISTRO/install/setup.bash ]; then
  echo "setup.bash found at path 2"
  source /opt/ros/$ROS_DISTRO/install/setup.bash
fi


# clone microROS repository
git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup

# Update dependencies using rosdep
sudo apt update && rosdep update
rosdep install --from-paths src --ignore-src -y

# Install pip
sudo apt-get install python3-pip


# Build micro-ROS tools and source them
colcon build
source install/local_setup.bash


# Download micro-ROS agent packages
ros2 run micro_ros_setup create_agent_ws.sh


# Build step
apt-get install libspdlog-dev
colcon build --cmake-args -DUAGENT_USE_SYSTEM_LOGGER=ON

# ros2 run micro_ros_setup build_agent.sh
source install/local_setup.bash