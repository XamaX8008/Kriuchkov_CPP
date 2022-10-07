cmake_minimum_required(VERSION 3.3)

project(Kruichkov_CPP)

set(CMAKE_CXX_STANDART 14)

include_directories(.)

add_executable(CW-2-3-1
        CW-2-3-1.cpp Graph.cpp Graph.h Node.cpp Node.h)