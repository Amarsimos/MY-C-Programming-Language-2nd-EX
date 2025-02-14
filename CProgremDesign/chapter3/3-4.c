#include <stdio.h>
#include <string.h>
#include <limits.h>
void reverse(char s[])
{
        int i = 0;
        int j = strlen(s) - 1;

        for (;i < j;i++, j--) {
                int c = s[i];
                s[i] = s[j];
                s[j] = c;
        }
}
void my_itoa(int n, char s[])
{
        int i = 0;
        int sign = 0;
        unsigned int m = n;//原来的代码不能表示负的最大值,因为有个符号位,故转为无符号数
        if (n < 0) {
                m = (unsigned int)(-n);//
                sign = -1;
        }

        do {
                s[i++] = m % 10 + '0';
                m /= 10;
        } while (m > 0);
        if (sign < 0) {
                s[i++] = '-';
        }
        s[i] = '\0';
        reverse(s);

}


int main()
{
        int n = INT_MIN;
        char s[100] = { 0, };
        my_itoa(n, s);
}

