#include <stdio.h>
#define YEARS 5
#define MONTHS 12
#define ROWS 3
#define COLS 5
void arr_multiply(int rows, int cols, int arr1[ROWS][COLS]); // 函数参数为数组时注意,传递进来的是指针,指向数组的首地址,而不是数组本身,定义也应该是指针类型
void arr_show(int rows, int cols, int arr[rows][cols]);
float tab_total(int year, int month, float total, float subtot, const float rain[YEARS][MONTHS]);
void tab_monthly(int month, int year, const float rain[YEARS][MONTHS]);

int main()
{
    const float rain[YEARS][MONTHS] =
        {
            {4.5, 4.3, 3.9, 4.2, 4.7, 5.5, 5.8, 6.0, 5.5, 5.1, 4.6, 4.2},
            {4.1, 4.0, 3.8, 4.1, 4.6, 5.4, 5.7, 5.9, 5.4, 4.9, 4.4, 4.0},
            {3.9, 3.8, 3.6, 3.9, 4.4, 5.2, 5.5, 5.7, 5.2, 4.7, 4.2, 3.8},
            {3.8, 3.7, 3.5, 3.8, 4.3, 5.1, 5.4, 5.6, 5.1, 4.6, 4.1, 3.7},
            {3.7, 3.6, 3.4, 3.7, 4.2, 5.0, 5.3, 5.5, 5.0, 4.5, 4.0, 3.6}};
    int year, month;
    float total, subtot;

    printf(" YEAR   RAINFALL(inchs)\n");
    total = tab_total(year, month, total, subtot, rain);
    printf("\nThe yearly average is %.1f inches.\n", total / YEARS);

    printf("\nMONTHLY AVERAGES:\n");
    printf("Jan \tFeb \tMar \tApr \tMay \tJun \tJul \tAug \tSep \tOct \tNov \tDec\n");
    tab_monthly(month, year, rain);
    return 0;
}
float tab_total(int year, int month, float total, float subtot, const float rain[YEARS][MONTHS])
{
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
            // subtot += *(*(rain + year) + month);//二维数组,首先指针指向数组首地址,然后加上行偏移量,再加上列偏移量
        }
        printf("%5d%10.1f\n", year + 2010, subtot);
        total += subtot;
    }
    return total;
}
void tab_monthly(int month, int year, const float rain[YEARS][MONTHS])
{
    float subtot;
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];
        // subtot += *(*(rain + year) + month);
        // float avg = subtot / YEARS;
        // printf("%2.1f\t", avg);
        printf("%2.1f\t", subtot / YEARS);
    }
}