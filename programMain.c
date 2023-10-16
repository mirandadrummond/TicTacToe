//
// Created by Miranda Drummond on 11/10/2023.
//
# include <stdio.h>
# include "tictactoe.h"

int main() {

    char board[3][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}};
    printf("Welcome to Tic Tac Toe. You are player 1, please select the number representing"
           " you would like to play. ");
    display_grid(board); // display board
    char move[100]; // set var of first move
    int count;
    for (count = 1; count <10; count++){
        printf("Please enter move: ");
        fgets (move, 100, stdin);
    }
    return true;
}