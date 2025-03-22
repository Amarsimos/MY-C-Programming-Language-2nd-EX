#include <stdio.h>

int critic(int units);

int main(void)
{
    int units1;
    printf("How many pounds to a frikin of butter?\n");
    scanf("%d", &units1);
    while (units1 != 56)
        units1 = critic(units1);
    printf("You must have looked it up!\n");

    return 0;
}

int critic(int units)
{
    int guess;
    printf("No luck,my friend. Try again.\n");
    scanf("%d", &guess);
    return units = guess;
}