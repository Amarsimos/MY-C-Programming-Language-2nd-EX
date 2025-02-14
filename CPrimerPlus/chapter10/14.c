#include <stdio.h>
#define YEARS 5
#define MONTHS 12
#define ROWS 3
#define COLS 5
void arr_save(int rows, int cols, double arr[rows][cols]);
double arr_avg(int row, int rows, int cols, double arr[rows][cols]);
double arr_max(int rows, int cols, double arr[rows][cols]);
double arr_avg_all(int rows, int cols, double arr[rows][cols]);

int main()
{
    int rows = ROWS;
    int cols = COLS;
    double arr[rows][cols]; // 变长数组不能用普通的初始化
    printf("Enter %d rows and %d columns of data:\n", rows, cols);
    arr_save(rows, cols, arr);
    double avg, avg_all, max;

    while (1)
    {
        for (int i = 0; i < rows; i++)
        {
            avg = arr_avg(i, rows, cols, arr);
            printf("avg of row %d: %.2f\n", i, avg);
        }
        printf("avg of all elements: %.2f\n", arr_avg_all(rows, cols, arr));
        printf("max of all elements: %.2f\n", arr_max(rows, cols, arr));
    }
    return 0;
}
void arr_save(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}
double arr_avg(int row, int rows, int cols, double arr[rows][cols])
{
    int j;
    double sum = 0.0;
    for (j = 0; j < cols; j++)
    {
        sum += arr[row][j];
    }
    double avg = sum / cols;
    return avg;
}
double arr_avg_all(int rows, int cols, double arr[rows][cols])
{
    int j, k;
    double sum = 0.0;
    for (j = 0; j < rows; j++)
    {
        for (k = 0; k < cols; k++)
        {
            sum += arr[j][k];
        }
    }
    double avg = sum / (rows * cols);
    return avg;
}
double arr_max(int rows, int cols, double arr[rows][cols])
{
    int i, j;
    double max = arr[0][0];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}