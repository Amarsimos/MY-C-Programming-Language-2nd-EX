#include<stdio.h>
#include<windows.h>
void my_itob(int n, char s[], int b)
{
        int i = 0;
        int sign = 0;

        unsigned int m = n;
        if (n < 0) {
                m = (unsigned int)(-n);
                sign = -1;
        }

        do {
                unsigned int c = m % b;
                if (c > 9) {
                        s[i++] = (char)(c - 10 + 'A');
                }
                else {
                        s[i++] = (char)(c + '0');
                }
                m /= b;
        } while (m > 0);
        if (sign < 0) {
                s[i] = '-';
        }
        s[i] = '\0';
       // reverse(s);
}


int main()
{
        
}