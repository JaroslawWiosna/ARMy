cmake_minimum_required(VERSION 3.6)
project(audio)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(Lame REQUIRED)
include_directories(${LAME_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp)
add_executable(audio ${SOURCE_FILES})