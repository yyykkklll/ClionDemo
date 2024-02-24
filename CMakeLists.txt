cmake_minimum_required(VERSION 3.27)
project(cppdemo C)
set(CMAKE_C_STANDARD 11)

add_executable(cppdemo main.c)


add_subdirectory(chapter_01)
add_subdirectory(LuoGu)
add_subdirectory(cpp)
add_subdirectory(873)
add_subdirectory(LeetCode)

