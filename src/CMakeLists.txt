cmake_minimum_required(VERSION 3.2)
set(ProjectName audio)
project(${ProjectName})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 ")

find_package(Lame REQUIRED)
include_directories(${LAME_INCLUDE_DIRS})

file(GLOB_RECURSE File File/*.cpp)
file(GLOB_RECURSE Filters Filters/*.cpp)
file(GLOB_RECURSE Parser Parser/*.cpp)

set(SOURCE_FILES main.cpp ${Filters} ${File} ${Parser})

add_executable(audio ${SOURCE_FILES})

target_link_libraries(${ProjectName} ${LAME_LIBRARIES})