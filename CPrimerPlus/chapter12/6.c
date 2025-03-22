
#include <stdio.h>
#include <stdlib.h>

int seed = 1;
int my_rand();
int main(void)
{
    int rand_count[10];
    for (int i = 0; i < 1000; i++)
    {
        int num = my_rand();
        switch (num)
        {
        case 1: //''单引号 ' 用于表示字符常量
            rand_count[0]++;
            break;
        case 2:
            rand_count[1]++;
            break;
        case 3:
            rand_count[2]++;
            break;
        case 4:
            rand_count[3]++;
            break;
        case 5:
            rand_count[4]++;
            break;
        case 6:
            rand_count[5]++;
            break;
        case 7:
            rand_count[6]++;
            break;
        case 8:
            rand_count[7]++;
            break;
        case 9:
            rand_count[8]++;
            break;
        case 10:
            rand_count[9]++;
            break;

        default:
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        int j = 0;
        if (0 == i)
        {
            j = 10;
        }
        else
        {
            j = i;
        }
        printf("%d:%d ", j, rand_count[i]);
    }
    return 0;
}
int my_rand()
{
    int roll;
    roll = rand() % 10 + 1;
    return roll;
}