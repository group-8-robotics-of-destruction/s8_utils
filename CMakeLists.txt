cmake_minimum_required(VERSION 2.8.3)
project(s8_utils)
find_package(catkin REQUIRED s8_msgs)
find_package(Boost REQUIRED COMPONENTS system)
catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS roscpp s8_msgs
)
include_directories(include ${catkin_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})