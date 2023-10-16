#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int add(int a, int b) {
    return a + b;
}

void display_grid(char board[3][3]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

/*
bool check_win(char board[3][3], bool win){
    if ((board[0][0] = board[0][1] = board[0][2])){
        return true;
    }

}*/