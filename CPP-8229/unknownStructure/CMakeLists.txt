cmake_minimum_required(VERSION 3.6)
project(unknownStructure)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Types.h Utils.cpp Utils.h)
add_executable(unknownStructure ${SOURCE_FILES})