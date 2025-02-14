#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void)
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
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan\t  Feb\t  Mar\t  Apr\t  May\t  Jun\t  Jul\t  Aug\t  Sep\t  Oct\t  Nov\t  Dec\t\n");
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
            // subtot += rain[year][month];
            subtot += *(*(rain + year) + month);
        printf("%1.1f\t", subtot / YEARS);
    }
    printf("\n");
    return 0;
}