# this file makes a docker image run this using       docker build -t r1_foxy_from_file .
# once thwe image r1_foxy_from_file is created then create container from this using docker scompose

FROM osrf/ros:foxy-desktop

RUN apt-get update
RUN apt-get install -y git && apt-get install -y python3-pip

RUN mkdir -p ~/ros2_ws/ws_1/src && cd ~/ros2_ws/ws_1/src

RUN git clone https://github.com/noshluk2/ros1_wiki

RUN mkdir -p ~/ros2_ws/ws_2/src && cd ~/ros2_ws/ws_2/src

RUN git clone https://github.com/siddhamruth/ros2_ws

RUN echo "the ros desktop is cloned "