#include <stdio.h>
double chline(char c, double i, double j);
double harmonic_mean(double ia, double ib);
void larger_of(double *pa, double *pb);
void sort(double *pa, double *pb, double *pc);

double main(void)
{
    double i = 0;
    double j = 0;
    double k = 0;
    while (1)
    {
        printf("Enter there double:\n");
        scanf("%lf %lf %lf", &i, &j, &k);
        sort(&i, &j, &k);
        printf("The sorted numbers are: %lf %lf %lf\n", i, j, k);
    }

    return 0;
}
void sort(double *pa, double *pb, double *pc)
{
    double min, mid, max;

    if (*pa < *pb)
    {
        if (*pa < *pc)
        {
            min = *pa;
            if (*pb < *pc)
            {
                mid = *pb;
                max = *pc;
            }
            else
            {
                mid = *pc;
                max = *pb;
            }
        }
        else
        {
            min = *pc;
            max = *pb;
        }
    }
    else if (*pb < *pa)
    {
        if (*pb < *pc)
        {
            min = *pb;
            if (*pa < *pc)
            {
                mid = *pa;
                max = *pc;
            }
            else
            {
                mid = *pc;
                max = *pa;
            }
        }
        else
        {
            min = *pc;
            mid = *pb;
            max = *pa;
        }
    }
    else
    {
        printf("The there numbers are equal.\n");
    }
    *pa = min;
    *pb = mid;
    *pc = max;
}