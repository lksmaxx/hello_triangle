cmake_minimum_required(VERSION 3.22)
project(hello_triangle)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES src/main.cpp)

add_executable(hello ${SOURCE_FILES})

add_subdirectory(deps)
