cmake_minimum_required(VERSION 3.24)
project(ClionCpp)
set(CMAKE_CXX_STANDARD 17)

include_directories("headers/student.h") #换成头文件所在目录

add_executable(ClassDemo_01 ClassDemo_01.cpp)
add_executable(student student.cpp)
