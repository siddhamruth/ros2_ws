# ros2_ws
This includes all the practice files for ros2 in a docker container on linux
#initial commit

Notion link for editing and research:
    

In docker folder there is docker compose file.


How to run docker?

execute the following in command line --
    go to docker folder
    execute docker-compose up -d
    type docker start ros2_foxy -i
    now u r in docker . do your operations.

to open doker in another terminal run the below command:
    docker exec -it ros2_foxy bin/bash

to include the ros binaries run follfowing:
    source  /opt/ros/foxy/setup.bash
    source /home/ros_ws/install/setup.bash


building of ros2:
    ros2 pkg create --build-type ament_cmake my_cpp_pkg
    colcon build


