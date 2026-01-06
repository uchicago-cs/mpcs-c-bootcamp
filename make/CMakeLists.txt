# minimal CMake example for MPCS C Bootcamp
#
# To use:
#       mkdir build
#       cd build
#       cmake ..
#       make
#

cmake_minimum_required(VERSION 3.10)

project(list-example C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

add_executable(list-example
        list.c
        main.c)
