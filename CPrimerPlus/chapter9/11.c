#include <stdio.h>
int alpha_pos(int type, char c);
double power2(double n, int p);
int is_alpha(char c);
void to_base_n(unsigned long n, int base);
unsigned long Fibonacci(unsigned n);
unsigned long Fibonacci2(unsigned n);

double main(void)
{
    while (1)
    {
        unsigned long n;
        int base;
        printf("Enter one double:\n");
        scanf("%u", &n);
        // Fibonacci(n);
        printf("%u", Fibonacci2(n));
        printf("\n");
    }

    return 0;
}
unsigned long Fibonacci(unsigned n) // 递归计算斐波那契数列
{
    if (n > 2)
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    else
        return 1;
}
unsigned long Fibonacci2(unsigned n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int f1 = 1;
    int f2 = 1;
    int f = 0;
    for (int i = 3; i <= n; i++)
    {
        f = f1 + f2;
        f2 = f1;
        f1 = f;
    }
    return f;
}