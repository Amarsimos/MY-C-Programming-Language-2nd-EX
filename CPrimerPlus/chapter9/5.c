#include <stdio.h>
double chline(char c, double i, double j);
double harmonic_mean(double ia, double ib);
void larger_of(double *pa, double *pb);

double main(void)
{
    double i = 0;
    double j = 0;
    while (1)
    {
        printf("Enter  two double: ");
        scanf("%lf%lf", &i, &j); // scanf函数的特性，scanf遇到 回车(enter)，空格，TAB 就会结束一次输入，空格不会接收
        larger_of(&i, &j);
        printf("i is %lf,j is %lf\n", i, j);
    }

    return 0;
}
void larger_of(double *pa, double *pb)
{
    if (*pa > *pb)
    {
        *pb = *pa;
    }
    else if (*pb > *pa)
    {
        *pa = *pb;
    }
    else
    {
        printf("The two numbers are equal.\n");
    }
}