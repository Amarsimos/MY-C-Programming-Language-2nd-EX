
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "7-diceroll.h"

int main(void)
{
    int dice, roll;
    int sides;
    int status;
    int sets;

    srand((unsigned int)time(0));
    // printf("Enterthe number of sets, q to stop.\n");
    // scanf("%d", &sets);
    // printf("Enter the number of sides per die, 0 to stop.\n");
    printf("Enterthe number of sets, q to stop.\n");
    while (scanf("%d", &sets) == 1 && sets > 0)
    {
        printf("Enter the number of sides per die, 0 to stop.\n");
        scanf("%d", &sides);
        printf("How many dice? ");
        if ((status = scanf("%d", &dice)) != 1)
        {
            if (status == EOF)
            {
                break;
            }
            else
            {
                printf("You shoud have enterded an integer.\n");
                printf("Let's begin again.\n");
                while (getchar() != '\n')
                    continue;
                printf("How many sides?Enter 0 to stop.\n");
                continue;
            }
        }
        roll = roll_n_dice(dice, sides);
        printf("here are %d sets of %d %d-sided dice:\n", sets, dice, sides);
        for (int i = 0; i < sets; i++)
        {
            printf("%d ", roll_n_dice(dice, sides));
        }
        printf("\n");
        printf("How many sets?Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
    printf("Goodbye.\n");
    return 0;
}