//
// Created by Miranda Drummond on 11/10/2023.
//

#include <stdio.h>
#include <stdbool.h>

// displayGrid function:
//Inputs: 3x3 grid (2D array)
//Outputs: None
//Action: Print the current state of the grid

void display_grid(char board[3][3]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// isValidMove function:
//Inputs: Player's move (cell number or coordinates)
//Outputs: Boolean (True if move is valid, False otherwise)
//Action:
//Check if the chosen cell is within the grid boundaries.
//Check if the chosen cell is not already marked.

bool isValidMove(char board[3][3], int row, int col) {
    // Check if the move is within the board boundaries
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return false;
    }

    // Check if the cell is already marked
    if (board[row][col] == 'X' || board[row][col] == 'O') {
        return false;
    }

    // If neither condition is met, the move is valid
    return true;
}


//isDraw function:
//Inputs: 3x3 grid
//Outputs: Boolean (True if draw, False otherwise)
//Action:
//If there are no empty cells left and no player has won, it's a draw.

bool isDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;  // Found an empty cell, so not a draw
            }
        }
    }
    return true;  // No empty cells found, it's a draw
}

//checkWin function:
//Inputs: Current player (X or O), 3x3 grid
//Outputs: Boolean (True if the player wins, False otherwise)
//Action:
//Check all rows, columns, and diagonals to see if the current player has three in a row.
bool checkWin(char board[3][3], char currentPlayer) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
            return true;  // Row win
        }
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
            return true;  // Column win
        }
    }

    // Check diagonals
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
        return true;  // Diagonal from top-left to bottom-right
    }
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
        return true;  // Diagonal from top-right to bottom-left
    }

    return false;  // No winning combination found
}
