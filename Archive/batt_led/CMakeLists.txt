cmake_minimum_required(VERSION 3.5)
project(batt_led)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(bat_led_interfaces REQUIRED)

add_executable(battery src/battery.cpp)
ament_target_dependencies(battery rclcpp bat_led_interfaces)

add_executable(led_pannel src/led_pannel.cpp)
ament_target_dependencies(led_pannel rclcpp bat_led_interfaces)


install(TARGETS
battery
led_pannel
DESTINATION lib/${PROJECT_NAME}
)
ament_package()


