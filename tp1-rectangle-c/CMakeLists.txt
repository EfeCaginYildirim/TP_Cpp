cmake_minimum_required(VERSION 3.14)
project(rectangle_c)

set(CMAKE_CXX_STANDARD 14)

add_executable(rectangle_c main.c rectangle.h rectangle.c)
