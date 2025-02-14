#include <stdio.h>
int alpha_pos(int type, char c);
double power2(double n, int p);
int is_alpha(char c);

double main(void)
{
    while (1)
    {
        double n;
        int p;
        printf("Enter two double:\n");
        scanf("%lf %d", &n, &p);
        printf("Result: %lf\n", power2(n, p));
    }

    return 0;
}
double power(double n, int p)
{
    if (0 == n)
    {
        if (0 == p)
        {
            printf("Error: 0^0\n");
            return 1;
        }
        else
            return 0;
    }
    if (p > 0)
    {
        double pow = 1;
        int i;

        for (i = 1; i <= p; i++)
        {
            pow *= n;
        }
        return pow;
    }
    else if (p < 0)
    {
        double pow = 1;
        int i;

        for (i = 1; i <= -p; i++)
        {
            pow /= n;
        }
        return pow;
    }
    else
        return 1;
}

double power2(double n, int p)
{
    if (0 == n)
    {
        if (0 == p)
        {
            printf("Error: 0^0\n");
            return 1;
        }
        else
            return 0;
    }
    if (0 == p)
    {
        return 1;
    }
    else
    {
        return n * power2(n, p - 1); // 使用递归,递归为p==1时,得到最开始的值,随后一层层返回得到最后的值
    }
}