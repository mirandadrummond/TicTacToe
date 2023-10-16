//
// Created by Miranda Drummond on 11/10/2023.
//

#ifndef TICTACTOE_TICTACTOE_H
#define TICTACTOE_TICTACTOE_H

#include <stdbool.h>

void display_grid(char board[3][3]);
bool checkWin(char board[3][3], bool win);
void isValidMove();
void isDraw();
int add(int a, int b);

#endif //TICTACTOE_TICTACTOE_H
