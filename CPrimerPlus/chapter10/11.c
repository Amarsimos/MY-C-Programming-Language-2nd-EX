#include <stdio.h>
#define MONTHS 12
#define YEARS 5
#define ROWS 3
#define COLS 5
void arr_multiply(int rows, int cols, int arr1[ROWS][COLS]); // 函数参数为数组时注意,传递进来的是指针,指向数组的首地址,而不是数组本身,定义也应该是指针类型
void arr_show(int rows, int cols, int arr[rows][cols]);

int main()
{
    int rows = ROWS;
    int cols = COLS;
    int arr[ROWS][COLS] = {{500, 2220, 30, 40, 1150}, {1000, 2000, 300, 400, 1100}, {800, 2240, 50, 45, 5150}};
    arr_show(rows, cols, arr);
    arr_multiply(rows, cols, arr);
    printf("\nAfter multiplying:\n");
    arr_show(rows, cols, arr);

    return 0;
}

// void arr_multiply(int rows, int cols, int arr1[][])//在 C 语言中，二维数组作为函数参数时，必须明确列数。
void arr_multiply(int rows, int cols, int arr1[ROWS][COLS]) // 在 C 语言中，二维数组作为函数参数时，必须明确列数。
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            arr1[i][j] *= 2;
    }
}
void arr_show(int rows, int cols, int arr[rows][cols])
{
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < cols; i++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}