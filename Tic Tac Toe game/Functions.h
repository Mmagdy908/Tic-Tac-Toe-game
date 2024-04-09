#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


// console screen
void displayBoard(char string[])
{

    system("clear");
    printf("  Tic-Tac-Toe Game\n\n\n");
    printf("Player 1 (x)   -   Player 2 (o)\n\n\n");
    printf("      |    |    \n");
    printf("    %c | %c  | %c \n", string[1], string[2], string[3]);
    printf("  ____|____|____\n");
    printf("      |    |    \n");
    printf("    %c | %c  | %c \n", string[4], string[5], string[6]);
    printf("  ____|____|____\n");
    printf("      |    |    \n");
    printf("    %c | %c  | %c \n", string[7], string[8], string[9]);
    printf("      |    |    \n\n");

}
// check game status
int checkwin(char x[])
{
    if (x[1] == x[2] && x[1] == x[3])
        return 1;
    else if (x[4] == x[5] && x[5] == x[6])
        return 1;
    else if (x[7] == x[8] && x[8] == x[9])
        return 1;
    else if (x[1] == x[4] && x[4] == x[7])
        return 1;
    else if (x[2] == x[5] && x[5] == x[8])
        return 1;
    else if (x[3] == x[6] && x[6] == x[9])
        return 1;
    else if (x[1] == x[5] && x[5] == x[9])
        return 1;
    else if (x[3] == x[5] && x[5] == x[7])
        return 1;
    else
        return -1;
}

//validity of input
int correctInput(int x, char y[])
{

    if (y[x] == 'x' || y[x] == 'o' || x < 1 || x>9)
        return 0;
    else
        return 1;
}