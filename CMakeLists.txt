cmake_minimum_required(VERSION 3.12)
project(Design_Pattern)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILE main.cpp Template_method.h Template_method_app.h)
add_executable(Design_Pattern ${SOURCE_FILE})
