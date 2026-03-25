cmake_minimum_required(VERSION 3.10)

project(robot)

set(CMAKE_CXX_STANDARD 17)

add_executable(robot_app
    src/main.cpp
    src/robot.cpp
    src/robotair.cpp
)

target_include_directories(robot_app PUBLIC include)

set_target_properties(robot_app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)