#include <stdio.h>
double chline(char c, double i, double j);
double harmonic_mean(double ia, double ib);

double main(void)
{
    double i = 0;
    double j = 0;
    while (1)
    {
        printf("Enter  two integers: ");
        scanf("%lf%lf", &i, &j); // scanf函数的特性，scanf遇到 回车(enter)，空格，TAB 就会结束一次输入，空格不会接收
        printf("harmonic mean is %0.2f\n", harmonic_mean(i, j));
    }

    return 0;
}
double harmonic_mean(double ia, double ib)
{
    double ia_re, ib_re, h;
    ia_re = 1.0 / ia;
    ib_re = 1.0 / ib;
    return (ia_re + ib_re) / 2;

    // return ia_re & ib_re + (ia_re ^ ib_re >> 1); // 相同部分取其一,不同部分除以2
}
