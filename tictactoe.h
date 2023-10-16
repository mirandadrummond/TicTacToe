//
// Created by Miranda Drummond on 11/10/2023.
//

#ifndef TICTACTOE_TICTACTOE_H
#define TICTACTOE_TICTACTOE_H

#include <stdbool.h>

void display_grid(char board[3][3]);
bool checkWin(char board[3][3], char currentPlayer);
bool isValidMove(char board[3][3], int row, int col);
bool isDraw(char board[3][3]);
void saveGameState(char board[3][3], const char* filename);


#endif //TICTACTOE_TICTACTOE_H
