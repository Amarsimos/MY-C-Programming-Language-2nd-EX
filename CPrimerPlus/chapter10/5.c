#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define SIZE 10
double Find_Max(double arr[], int size);
double Find_Min(double arr[], int size);

int main()
{
    double arr[SIZE] = {10.0, 2220.0, 30.0, 40.0, 1150.0, 60.0, 70.0, 80.0, 90.0, 100.0};
    double max = Find_Max(arr, SIZE);
    double min = Find_Min(arr, SIZE);
    double sub = max - min;
    printf("The subtraction value in the array is: %f\n", sub);
    return 0;
}
double Find_Max(double arr[], int size)
{
    int i = 0;
    double max = arr[0];
    for (i = 0; i < size; i++)
    {
        arr[i] > max ? max = arr[i] : max;
    }
    return max;
}

double Find_Min(double arr[], int size)
{
    int i = 0;
    double min = arr[0];
    for (i = 0; i < size; i++)
    {
        arr[i] < min ? min = arr[i] : min;
    }
    return min;
}