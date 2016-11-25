cmake_minimum_required (VERSION 2.6)
SET(CMAKE_CXX_STANDARD 11)
SET(COMPILE_FLAGS "-std=c++11 -std=gnu++11 -Wall -flto")
SET(LINK_FLAGS "-lgtest -lpthread -flto")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}" )
SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINK_EXECUTABLE} ${LINK_FLAGS}" )
include_directories(${GTEST_INCLUDE_DIRS})

add_subdirectory(test)

#project (parser-test)
#find_package(Gtest)
#add_executable(parser-test ./parser.cpp) 
#target_link_libraries(parser-test gtest pthread)

