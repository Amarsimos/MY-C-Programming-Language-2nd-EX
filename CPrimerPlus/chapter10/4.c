#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define SIZE 10
int Max(float a, float b);
int Arr_Max(float arr[], int size);

int main()
{
    float arr[SIZE] = {10.0, 2220.0, 30.0, 40.0, 1150.0, 60.0, 70.0, 80.0, 90.0, 100.0};
    int max = Arr_Max(arr, SIZE);
    printf("The maximum value in the array is: %d\n", max + 1);
    return 0;
}
int Max(float a, float b)
{
    if (a > b)
        return 1;
    else
        return 0;
}
int Arr_Max(float arr[], int size)
{
    int i;
    int max_num = 0;
    float max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (Max(arr[i], arr[max_num]))
        {
            max_num = i;
        }
        else
        {
            ;
        }
    }
    return max_num;
}