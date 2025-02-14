#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define ROWS 3
#define COLS 5
void arr_show(int cols, double arr[cols]);
void arr_add(double arr1[], double arr2[], double arr3[], int size);

int main()
{
    int rows = ROWS;
    int cols = COLS;
    // double arr[rows][cols] = {
    //     {500.0, 2220.0, 30.0, 40.0, 1150.0},
    //     {1000.0, 2000.0, 300.0, 400.0, 1100.0},
    //     {800.0, 2240.0, 50.0, 45.0, 5150.0}};
    // double arr2[rows][cols] = {0};//根据 C 标准，变长数组（即使用运行时确定大小的数组）只能使用空的初始化器进行初始化，因此不能直接用具体的值初始化。
    double arr[COLS] = {500.0, 2220.0, 30.0, 40.0, 1150.0};
    double arr2[COLS] = {1000.0, 2000.0, 300.0, 400.0, 1100.0};
    double arr3[COLS] = {0};
    arr_add(arr, arr2, arr3, cols);
    printf("The original arrays are:\n");
    arr_show(cols, arr);
    printf("\n");
    printf("The original arrays are:\n");
    arr_show(cols, arr2);
    printf("\n");
    printf("The sum of the original arrays is:\n");
    arr_show(cols, arr3);
    // arr_add(arr, arr2, arr3, cols);//在 arr_add 函数中，参数 arr1、arr2 和 arr3 的类型应该是 double*（指向双精度浮点数的指针），而不是 double。因为数组传递时会退化为指针

    return 0;
}

void arr_add(double arr1[], double arr2[], double arr3[], int size) // 函数参数为数组时注意,传递进来的是指针,指向数组的首地址,而不是数组本身,定义也应该是指针类型
{
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}
void arr_show(int cols, double arr[cols])
{
    for (int j = 0; j < cols; j++)
    {
        printf("%.2f ", arr[j]);
    }
    printf("\n");
}