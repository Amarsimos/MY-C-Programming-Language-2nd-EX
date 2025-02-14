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
    double arr[2][SIZE] = {{500.0, 2220.0, 30.0, 40.0, 1150.0, 60.0, 70.0, 80.0, 90.0, 100.0},
                           {1000.0, 2000.0, 300.0, 400.0, 1100., 600.0, 700.0, 800.0, 900.0, 1000.0}};
    double arr2[2][SIZE] = {0};
    for (int i = 0; i < 2; i++)
    {
        arr_cpy(arr[i], arr2[i], SIZE);
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%.2f ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void arr_cpy(double *arr, double *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }
}