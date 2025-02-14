#include <stdio.h>
double min(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter a number: \n");
    scanf("%lf", &x);
    printf("Enter a number: \n");
    scanf("%lf", &y);
    printf("%f\n", min(x, y));
    main(); // 递归调用,方便调试,会占用大量资源,最好使用循环
    return 0;
}
double min(double x, double y)
{
    return (x < y) ? x : y;
}