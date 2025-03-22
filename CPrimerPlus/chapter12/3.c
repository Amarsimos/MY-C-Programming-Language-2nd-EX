#include <stdio.h>

int set_mode(int mode_num);
int get_info(int mode, int *distance, int *fuel);
int show_info(int mode, int distance, int fuel);

int main(void)
{
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode:");
    scanf("%d", &mode);

    while (mode >= 0)
    {
        int distance, fuel;
        int mode_num = set_mode(mode);
        get_info(mode_num, &distance, &fuel);
        printf("%d,%d\n", distance, fuel);
        show_info(mode_num, distance, fuel);
        printf("Enter 0 for metric mode, 1 for US mode:");
        printf("(-1 to exit): ");
        scanf("%d", &mode);
    }
    printf("Goodbye!\n");
}

int set_mode(int mode_num)
{
    int mode = mode_num;
    return mode;
}
int get_info(int mode, int *distance, int *fuel)
{
    if (0 == mode)
    {
        printf("Enter distance in kilometers: ");
        scanf("%d", distance); // 这里scanf的参数形式略有不同,由于distance已经是指向distance的指针了,所以不需要取地址符号,

        printf("Enter fuel consumption in liters: ");
        scanf("%d", fuel);
        // float lpk = (float)distance / fuel;
        // printf("L per 100 km: %.2f\n", lpk);
    }
    else if (1 == mode)
    {
        printf("Enter distance in miles: ");
        scanf("%d", distance);
        printf("Enter fuel consumption in gallons: ");
        scanf("%d", fuel);
        // float mpg = (float)distance / fuel;
        // printf("L per 100 km: %.2f\n", mpg);
    }
    else
    {
        printf("Invalid mode.\n");
    }
}

int show_info(int mode, int distance, int fuel)
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
        float lpk = (float)distance / fuel;
        printf("L per 100 km: %.2f\n", lpk);
    }
    else
    {
        printf("Invalid mode.\n");
    }
}