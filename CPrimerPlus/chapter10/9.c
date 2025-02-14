#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define ROWS 3
#define COLS 5
void arr_show(int rows, int cols, double arr[rows][cols]);
void arr_cpy(int rows, int cols, double arr[rows][cols], double arr2[rows][cols]);

int main()
{
    int rows = ROWS;
    int cols = COLS;
    // double arr[rows][cols] = {
    //     {500.0, 2220.0, 30.0, 40.0, 1150.0},
    //     {1000.0, 2000.0, 300.0, 400.0, 1100.0},
    //     {800.0, 2240.0, 50.0, 45.0, 5150.0}};
    // double arr2[rows][cols] = {0};//根据 C 标准，变长数组（即使用运行时确定大小的数组）只能使用空的初始化器进行初始化，因此不能直接用具体的值初始化。
    double arr[ROWS][COLS] = {
        {500.0, 2220.0, 30.0, 40.0, 1150.0},
        {1000.0, 2000.0, 300.0, 400.0, 1100.0},
        {800.0, 2240.0, 50.0, 45.0, 5150.0}};
    double arr2[rows][cols]; // 根据 C 标准，变长数组（即使用运行时确定大小的数组）只能使用空的初始化器进行初始化，因此不能直接用具体的值初始化。

    arr_cpy(rows, cols, arr, arr2);
    printf("Original array:\n");
    arr_show(rows, cols, arr);
    printf("Copied array:\n");
    arr_show(rows, cols, arr2);
    return 0;
}
void arr_cpy(int rows, int cols, double arr[rows][cols], double arr2[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr2[i][j] = arr[i][j];
        }
    }
}
void arr_show(int rows, int cols, double arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%.2f ", arr[i][j]);
        }
        printf("\n");
    }
}