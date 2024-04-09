#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include "Functions.h"



int main()
{
    char c = 'y';
    while (c == 'y')
    {
        char string[10] = { '0','1','2','3','4','5','6','7','8','9' };
        int move;
        int turn = 0, correct, player = 1, gameStatus = -1;  //gameStatus 1-->win   0-->draw  -1--->continue game    
        while (gameStatus == -1)
        {
            displayBoard(string);
            ++turn;
            player = turn % 2 == 0 ? 2 : 1;
            printf("Player %d, Enter a number : ", player);
            do
            {
                scanf_s("%d", &move);
                correct = correctInput(move, string);
                if (correct == 0)
                    printf("Invalid move, Re-enter : ");
            } while (correct == 0);
            string[move] = player == 1 ? 'x' : 'o';
            gameStatus = checkwin(string);
            if (gameStatus == -1 && turn == 9)
                gameStatus = 0;
        }
        displayBoard(string);
        if (gameStatus == 1)
            printf("==>Player %d won!\n\n", player);
        else {
            printf("Draw\n\n");

        }
        printf("Continue? y-n");
        scanf_s("%c", &c);
        c = getchar();
    }
    return 0;
}