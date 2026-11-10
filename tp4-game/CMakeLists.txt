cmake_minimum_required(VERSION 3.14)
project(Game_template)

set(CMAKE_CXX_STANDARD 14)

add_executable(Game_template main.cpp
        Game.h
        GameT.h
        Power4.cpp
        Power4.h
        TicTacToe.cpp
        TicTacToe.h
        Play.cpp
        Play.h
        PlayPower4.cpp
        PlayPower4.h
        PlayTicTacToe.cpp
        PlayTicTacToe.h)
