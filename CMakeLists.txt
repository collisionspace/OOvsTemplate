cmake_minimum_required(VERSION 3.6)
project(slonej3_project2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Utilities/RandomGeneration.cpp Utilities/RandomGeneration.h Interfaces/IComparable.cpp Interfaces/IComparable.h Wrappers/IntWrapper.cpp Wrappers/IntWrapper.h Utilities/Sort.cpp Utilities/Sort.h Wrappers/StringWrapper.cpp Wrappers/StringWrapper.h)
add_executable(slonej3_project2 ${SOURCE_FILES})