#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define SIZE 10
double Find_Max(double arr[], int size);
void arr_cpy2(double *arr, double *arr2, int size);
double Find_Max(double arr[], int size);
double Find_Min(double arr[], int size, double min_o);
void arr_cpy(double *arr, double *arr2, int size);
void sort(double *arr, int size);

int main()
{
    double arr[SIZE] = {500.0, 2220.0, 30.0, 40.0, 1150.0, 60.0, 70.0, 80.0, 90.0, 100.0};
    double arr2[3] = {0};
    arr_cpy2((arr + 2), arr2, 3); // 传递参数时注意,arr+2为数组的起始地址,arr2为数组的首地址,*(arr+2)不能作为参数传递,传递金函数的应该是一个地址,而不是解引用后的数值.
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f ", arr2[i]);
    }
    printf("\n");
    return 0;
}
void arr_cpy(double *arr, double *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }
}
void arr_cpy2(double *arr, double *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[i];
    }
}