#include <stdio.h>
#define YEARS 5
#define MONTHS 12
#define ROWS 3
#define COLS 5
void arr_save(double arr[ROWS][COLS]);
double arr_avg(int row, double arr[ROWS][COLS]);
double arr_max(double arr[ROWS][COLS]);
double arr_avg_all(double arr[ROWS][COLS]);

int main()
{
    double arr[ROWS][COLS] = {0.0};
    printf("Enter %d rows and %d columns of data:\n", ROWS, COLS);
    arr_save(arr);
    double avg, avg_all, max;

    while (1)
    {
        for (int i = 0; i < ROWS; i++)
        {
            avg = arr_avg(i, arr);
            printf("avg of row %d: %.2f\n", i, avg);
        }
        printf("avg of all elements: %.2f\n", arr_avg_all(arr));
        printf("max of all elements: %.2f\n", arr_max(arr));
    }
    return 0;
}
void arr_save(double arr[ROWS][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}
double arr_avg(int row, double arr[ROWS][COLS])
{
    int j;
    double sum = 0.0;
    for (j = 0; j < COLS; j++)
    {
        sum += arr[row][j];
    }
    double avg = sum / COLS;
    return avg;
}
double arr_avg_all(double arr[ROWS][COLS])
{
    int j, k;
    double sum = 0.0;
    for (j = 0; j < ROWS; j++)
    {
        for (k = 0; k < COLS; k++)
        {
            sum += arr[j][k];
        }
    }
    double avg = sum / (ROWS * COLS);
    return avg;
}
double arr_max(double arr[ROWS][COLS])
{
    int i, j;
    double max = arr[0][0];
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}