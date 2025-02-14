#include <stdio.h>
int alpha_pos(int type, char c);
double power2(double n, int p);
int is_alpha(char c);
void to_base_n(unsigned long n, int base);

double main(void)
{
    while (1)
    {
        unsigned long n;
        int base;
        printf("Enter two double:\n");
        scanf("%u %d", &n, &base);
        to_base_n(n, base);
        printf("\n");
    }

    return 0;
}

void to_base_n(unsigned long n, int base) // 进制转换函数
{
    int r;

    r = n % base;  // 余数为进制的位
    if (n >= base) // 若余数为0，则停止递归
        to_base_n(n / base, base);
    printf("%d", r); // 输出余数,从高位到低位,先输出最里层的进制位
    return;
}