cmake_minimum_required(VERSION 3.16)
project(moveit_nao_config)

find_package(ament_cmake REQUIRED)

install(DIRECTORY config launch srdf
        DESTINATION share/${PROJECT_NAME})

ament_package()
