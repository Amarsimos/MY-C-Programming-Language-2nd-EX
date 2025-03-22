#include <stdio.h>

int mode = 0;
int distance = 0;
int fuel = 0;

int set_mode(int mode_num)
{
    mode = mode_num;
    return mode;
}
int get_info()
{
    if (0 == mode)
    {
        printf("Enter distance in kilometers: ");
        scanf("%d", &distance);
        printf("Enter fuel consumption in liters: ");
        scanf("%d", &fuel);
        float lpk = (float)distance / fuel;
        printf("L per 100 km: %.2f\n", lpk);
    }
    else if (1 == mode)
    {
        printf("Enter distance in miles: ");
        scanf("%d", &distance);
        printf("Enter fuel consumption in gallons: ");
        scanf("%d", &fuel);
        float mpg = (float)distance / fuel;
        printf("L per 100 km: %.2f\n", mpg);
    }
    else
    {
        printf("Invalid mode.\n");
    }
}

int show_info()
{
    if (0 == mode)
    {
        printf("Distance in kilometers: %d\n", distance);
        printf("Fuel consumption in liters : %d\n", fuel);
        float lpk = (float)distance / fuel;
        printf("Miles per gallon: %.2f\n", lpk);
    }
    else if (1 == mode)
    {
        printf("Distance in miles: %d\n", distance);
        printf("Fuel consumption in gallons: %d\n", fuel);
        float mpg = (float)distance / fuel;
        printf("Miles per gallon: %.2f\n", mpg);
    }
    else
    {
        printf("Invalid mode.\n");
    }
}