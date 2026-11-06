cmake_minimum_required(VERSION 4.3)
project(tp3_figure2d)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tp3_figure2d
        main.cpp
        Rectangle.cpp
        Rectangle.h
        Circle.cpp
        Circle.h
        Square.cpp
        Square.h
        Figure2D.h
        Figure2D.cpp)
