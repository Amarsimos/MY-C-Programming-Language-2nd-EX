#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define SIZE 10
double Find_Max(double arr[], int size);
double Find_Max(double arr[], int size);
double Find_Min(double arr[], int size, double min_o);
void arr_cpy(double *arr, double *arr2, int size);
void sort(double *arr, int size);

int main()
{
    double arr[SIZE] = {500.0, 2220.0, 30.0, 40.0, 1150.0, 60.0, 70.0, 80.0, 90.0, 100.0};
    double arr2[SIZE] = {0};
    arr_cpy(arr, arr2, SIZE);
    sort(arr2, SIZE);
    printf("The sorted array is:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%.2f ", arr2[i]);
    }
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

double Find_Min(double arr[], int size, double min_o)
{
    int i = 0;
    double min_i = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > min_o)
            (arr[i] < min_i) ? min_i = arr[i] : min_i;
        else
            continue;
    }
    return min_i;
}
void sort(double *arr, int size) // 难点在于倒序的算法设计,需要详细的思考
{
    int i, j, k, tmp;
    for (i = 0; i < size - 1; i++)
    {
        k = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[k] < arr[j])
                k = j;
        }
        tmp = arr[i];
        arr[i] = arr[k];
        arr[k] = tmp;
    }
}
void arr_cpy(double *arr, double *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }
}