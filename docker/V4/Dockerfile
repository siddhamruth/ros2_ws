# this file makes a docker image run this using       docker build -t r1_foxy_from_file .
# once thwe image r1_foxy_from_file is created then create container from this using docker scompose

FROM osrf/ros:foxy-desktop

# Install required dependencies
RUN apt-get update && apt-get install -y \
    curl \
    git \
    lsb-release \
    python3-pip

# Install Micro-ROS
# RUN apt-get update && apt-get install -y \

# # Source the ROS 2 installation
# source /opt/ros/$ROS_DISTRO/setup.bash \
#     # Create a workspace and download the micro-ROS tools
#     mkdir microros_ws \ 
#     cd microros_ws \
#     git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git src/micro_ros_setup \
#     # Update dependencies using rosdep
#     sudo apt update && rosdep update \
#     rosdep install --from-paths src --ignore-src -y \
#     # Install pip
#     sudo apt-get install python3-pip \
#     # Build micro-ROS tools and source them
#     colcon build \
#     source install/local_setup.bash 



# Install Docker
RUN apt-get update && apt-get install -y \
    apt-transport-https \
    ca-certificates \
    curl \
    gnupg \
    lsb-release \
    && curl -fsSL https://download.docker.com/linux/ubuntu/gpg | gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg \
    && echo "deb [arch=amd64 signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable" | tee /etc/apt/sources.list.d/docker.list > /dev/null \
    && apt-get update && apt-get install -y \
    docker-ce-cli \
    && rm -rf /var/lib/apt/lists/*

# Install VS Code and ROS 2 Remote Containers extension
RUN curl -fsSL https://code-server.dev/install.sh 
    # && su -c "code-server --install-extension ms-azuretools.vscode-docker" vscode \
    # && su -c "code-server --install-extension ms-vscode-remote.remote-containers" vscode

# Expose the default code-server port
EXPOSE 8080

# Set up the entrypoint
CMD ["/usr/bin/code-server", "--bind-addr", "0.0.0.0:8080", "."]