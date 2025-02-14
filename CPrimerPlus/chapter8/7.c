#include <stdio.h>
#define FIRST 0.15
#define SECOND 0.2
#define THIRD 0.25
#define FST 8.75
#define SND 9.33
#define TRD 10.00
#define FTH 11.20

float TotalRevenue(int hours, float level);
float Tex(int money);
float Bare(float money, float tex);
void menu();
int Choice(int choice);

int main(void)
{
    char choice;
    int flag = 0;
    menu();
    scanf("%c", &choice);
    while (Choice != 0)
    {
        flag = Choice(choice);
        if (flag == 0) // 控制流程结束,退出循环
            break;
        else
        {
            printf("\n\n\n");
            printf("Press any key to continue\n");
            getchar();
            getchar();
            menu();
            scanf("%d", &choice);
        }
    }
    return 0;
}

void printall(float level)
{
    int hours = 0;
    float texes = 0;
    float money = 0;
    printf("Enter work hours : \n");
    scanf("%d", &hours);
    money = TotalRevenue(hours, level);
    texes = Tex(money);
    printf("Total revenue : %.2f\n", money);
    printf("Tex : %.2f\n", texes);
    printf("Bare : %.2f\n", Bare(money, texes));
}
float TotalRevenue(int hours, float level)
{
    float overwork_money = 0;
    if (hours >= 40)
        overwork_money = (hours - 40) * 1.5 * level;
    float sum = level * hours + overwork_money;
    return sum;
}
float Tex(int money)
{
    float sum = 0;
    float sum1 = 300 * FIRST;
    float sum2 = sum1 + 150 * SECOND;
    if (money < 300 && money >= 0)
        sum = money * FIRST;
    else if (money >= 300 && money < 450)
        sum = sum1 + (money - 300) * SECOND;
    else if (money >= 450)
        sum = sum2 + (money - 450) * THIRD;
    else
        return -1;
    return sum;
}
float Bare(float money, float tex)
{
    float sum = 0;
    sum = money - tex;
    return sum;
}
void menu()
{
    printf("***********************************\n");
    printf("Enter the number:\n");
    printf("a.$8.75/hr\n");
    printf("b.$9.33/hr\n");
    printf("c.$10.00/hr\n");
    printf("d.$11.20/hr\n");
    printf("q.Exit\n");
    printf("***********************************\n");
}
int Choice(int choice)
{
    float level = 0;
    switch (choice)
    {
    case 'a':
        printf("You choose $8.75/hr\n");
        level = FST;
        printall(level);
        break;
    case 'b':
        printf("You choose $9.33/hr\n");
        level = SND;
        printall(level);
        break;
    case 'c':
        printf("You choose $10.00/hr\n");
        level = TRD;
        printall(level);
        break;
    case 'd':
        printf("You choose $11.20/hr\n");
        level = FTH;
        printall(level);
        break;
    case 'q':
        printf("Exit\n");
        return 0;
        break;
    default:
        printf("Invalid choice\n");
        return -1;
        break;
    }
}
