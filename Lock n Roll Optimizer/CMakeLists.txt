cmake_minimum_required(VERSION 3.6)
project(Lock_n_Roll)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Roll.h Roll.cpp)
add_executable(Lock_n_Roll ${SOURCE_FILES})