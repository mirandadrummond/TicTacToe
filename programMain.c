//
// Created by Miranda Drummond on 11/10/2023.
//
#include <stdio.h>
#include <stdbool.h>
#include "tictactoe.h"

int main() {


    // Initialise the board where Tic Tac Toe will be played. In this instance I am doing a 3x3 array called board.
    char board[3][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'}};

    // For simplicity I have decided player X will go first !
    char currentPlayer = 'X';
    //    Display welcome message
    printf("Welcome to Tic Tac Toe. The player who wishes to be X's will begin.\n");
    //    While game is not over:
    while (true) {
        display_grid(board);
        printf("Player %c, please enter your move (1-9): ", currentPlayer);

        int move;
        scanf("%d", &move);

        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if(isValidMove(board, row, col)) {
            board[row][col] = currentPlayer;  // Mark the board with the current player's symbol

            if (checkWin(board, currentPlayer)) {
                display_grid(board);
                printf("Player %c wins!\n", currentPlayer);
                break;
            } else if(isDraw(board)) {
                display_grid(board);
                printf("The game is a draw.\n");
                break;
            }
            // Adding in export to .txt to save state of the current game.
            saveGameState(board, "TicTacToe/gamestate.txt");


            // Switch to the other player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            printf("Invalid move. Please try again.\n");
        }
    }
    printf("Who wins?!");
    return 0;

}