#include <stdio.h>
#define MONTHS 12
#define YEARS 5
void copy_arr(double target[], double source[], int size);
void copy_prr(double *target, double *source, int size);
void copy_ptrs(double *target, double *source, double *end);

int main(void)
{
    double source[YEARS] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double target1[YEARS] = {0.0};
    double target2[YEARS] = {0.0};
    double target3[YEARS] = {0.0};
    printf("Source array: ");
    for (int i = 0; i < YEARS; i++)
    {
        printf("%.1lf ", source[i]);
    }
    printf("\n");
    printf("Target1 array: ");
    for (int i = 0; i < YEARS; i++)
    {
        printf("%.1lf ", target1[i]);
    }
    printf("\n");
    printf("Target2 array: ");
    for (int i = 0; i < YEARS; i++)
    {
        printf("%.1lf ", target2[i]);
    }
    printf("\n");
    printf("Target3 array: ");
    for (int i = 0; i < YEARS; i++)
    {
        printf("%.1lf ", target3[i]);
    }
    printf("\n");
    copy_arr(target1, source, YEARS);
    copy_prr(target2, source, YEARS);

    copy_ptrs(target3, source, source + YEARS);
    printf("After copying using copy_arr():\n");
    printf("Target1 array: ");
    for (int i = 0; i < YEARS; i++)
    {
        printf("%.1lf ", target1[i]);
    }
    printf("\n");
    printf("After copying using copy_prr():\n");
    printf("Target2 array: ");
    for (int i = 0; i < YEARS; i++)
    {
        printf("%.1lf ", target2[i]);
    }
    printf("\n");
    printf("After copying using copy_ptrs():\n");
    printf("Target3 array: ");
    for (int i = 0; i < YEARS; i++)
    {
        printf("%.1lf ", target3[i]);
    }
    printf("\n");
}
void copy_arr(double target[], double source[], int size)
{
    for (int i = 0; i < size; i++)
    {
        target[i] = source[i];
    }
}
void copy_prr(double *target, double *source, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(target + i) = *(source + i);
    }
}
void copy_ptrs(double *target, double *source, double *end)
{
    while (source < end)
    {
        *target++ = *source++;
    }
}
// ddd