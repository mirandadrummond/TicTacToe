cmake_minimum_required(VERSION 3.17)
project(TicTacToe)

set(CMAKE_C_STANDARD 99)

# Specify the CUnit include directory
include_directories(/opt/homebrew/Cellar/cunit/2.1-3/include)

# Create executable for the main program
add_executable(runMain programMain.c tictactoe.c)

# Create executable for the tests
add_executable(runTest testMain.c tictactoe.c)

# Link CUnit for the tests
target_link_libraries(runTest /opt/homebrew/Cellar/cunit/2.1-3/lib/libcunit.a)
