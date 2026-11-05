cmake_minimum_required(VERSION 4.3)
project(tp2_mystring)

set(CMAKE_CXX_STANDARD 14)
add_compile_definitions(MYLOG)

include_directories(.)

add_executable(tp2_mystring
        main.cpp
        MyString.cpp
        MyString.h)
