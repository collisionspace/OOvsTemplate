cmake_minimum_required(VERSION 3.6)
project(slonej3_project2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp RandomGeneration.cpp RandomGeneration.h IComparable.cpp IComparable.h IntWrapper.cpp IntWrapper.h Sort.cpp Sort.h StringWrapper.cpp StringWrapper.h)
add_executable(slonej3_project2 ${SOURCE_FILES})