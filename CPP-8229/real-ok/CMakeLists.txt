cmake_minimum_required(VERSION 3.6)
project(real-ok)

set(USE_DOUBLE 1)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp utils/types.h)
add_executable(real-ok ${SOURCE_FILES})