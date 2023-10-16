# TicTacToe
## A simple command line TicTacToe game using the C programming language.

This code is designed to work in CLion, if you copy and paste the files and compile them via the command line they should still work.

In this repo we have the following files:

`tictactoe.c` - Contains all the functions which run the tic tac toe game.
`tictactoe.h` - The header file which exports the functions from the `.c` file so they can be used in our other files.
`programMain.c` - The file we run when we want to just run the program. This takes the functions from `tictactoe.c` and then uses them in its main function.
`testMain.c` - This file takes the functions from `tictactoe.c` and runs unit tests on them using the CUnit library.

This file format allows us to effectively have two main programs, one for testing and one for running our game.

Here we have the output of our 3 test suites and their subsequent tests:
![img.png](img/img.png)

Output of debugging if there's a win:

![img_1.png](img/img_1.png)

n.b. The movesMade is only tracked if there's a draw.

