# this file makes a docker image run this using       docker build -t r1_foxy_from_file .
# once thwe image r1_foxy_from_file is created then create container from this using docker scompose

FROM dustynv/ros:humble-ros-core-l4t-32.7.1

# Install required dependencies
RUN apt-get update && apt-get install -y \
    curl \
    git \
    lsb-release \
    python3-pip
# Install Micro-ROS
RUN apt-get update && apt-get install -y &&
# # Source the ROS 2 installation
    source /opt/ros/$ROS_DISTRO/setup.bash &&
#     # Create a workspace and download the micro-ROS tools
#     mkdir microros_ws \ 
#     cd microros_ws \
#     git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup \
#     # Update dependencies using rosdep
#     sudo apt update && rosdep update \
    # rosdep install --from-paths src --ignore-src -y \
#     # Install pip
#     sudo apt-get install python3-pip \
#     # Build micro-ROS tools and source them
#     colcon build \
#     source install/local_setup.bash 
# clone microROS repository
    mkdir /git &&
    cd git &&
    git clone https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup\
    git checkout $ROS_DISTRO\
    # Update dependencies using rosdep
    sudo apt update && rosdep update\
    rosdep install --from-paths src --ignore-src -y\
    # Install pip
    sudo apt-get install python3-pip\
    # Build micro-ROS tools and source them
    apt-get install libspdlog-dev\
    colcon build --cmake-args -DUAGENT_USE_SYSTEM_LOGGER=ON\
    source install/local_setup.bash\
    # Download micro-ROS agent packages
    ros2 run micro_ros_setup create_agent_ws.sh\
    # Build step
    ros2 run micro_ros_setup build_agent.sh\
    source install/local_setup.bash


# Install VS Code and ROS 2 Remote Containers extension
RUN curl -fsSL https://code-server.dev/install.sh\
    && su -c "code-server --install-extension ms-azuretools.vscode-docker" vscode \
    && su -c "code-server --install-extension ms-vscode-remote.remote-containers" vscode

# Expose the default code-server port
EXPOSE 8080

# Set up the entrypoint
CMD ["/usr/bin/code-server", "--bind-addr", "0.0.0.0:8080", "."]