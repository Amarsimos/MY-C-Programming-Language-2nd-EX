#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define SIZE 10
int Max(int a, int b);
int Arr_Max(int arr[], int size);

int main()
{
    int arr[SIZE] = {10, 20, 30, 40, 1150, 60, 70, 80, 90, 100};
    int max = Arr_Max(arr, SIZE);
    printf("The maximum value in the array is: %d\n", max);
    return 0;
}
int Max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int Arr_Max(int arr[], int size)
{
    int i;
    int max = arr[0];
    for (i = 0; i < size; i++)
        max = Max(arr[i], max);
    return max;
}