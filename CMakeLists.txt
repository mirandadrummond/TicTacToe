cmake_minimum_required(VERSION 3.26)
project(TicTacToe C)

set(CMAKE_C_STANDARD 11)

add_executable(TicTacToe tictactoe.c
        testMain.c
        programMain.c
        tictactoe.h)
