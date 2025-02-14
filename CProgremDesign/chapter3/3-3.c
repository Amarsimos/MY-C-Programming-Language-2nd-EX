#include <ctype.h>
#include <stdio.h>
#include <string.h>
/* atoi:  convert s to integer; version 2 */

int atoi(char s[])
{
        int i, n, sign;
        for (i = 0; isspace(s[i]); i++) /* skip white space */
                ;
        sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-') /* skip sign */
                i++;
        for (n = 0; isdigit(s[i]); i++)
                n = 10 * n + (s[i] - '0');
        return sign * n;
}

void shellsort(int v[], int n)
{
        int gap, i, j, temp;

        for (gap = n / 2; gap > 0; gap /= 2) {
                for (i = gap; i < n; i++) {
                        for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                                temp = v[j];
                                v[j] = v[j + gap];
                                v[j + gap] = temp;
                        }
                }
        }
}

void my_sort(int v[], int n)
{
        int i, j, temp;
        for (i = 1; i < n; i++) {
                for (j = i - 1; j >= 0 && v[j] > v[j + 1]; j -= 1) {
                        temp = v[j];
                        v[j] = v[j + 1];
                        v[j + 1] = temp;
                }
        }
}

void reverse(char s[])
{
        int i, j;
        for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
                int c = s[i];
                s[i] = s[j];
                s[j] = c;
        }
}

// 以下是3-3的习题;没做
void expand(char dst[], char src[])
{
        int nLen = strlen(src);
        int i = 0;
        int j = 0;

        int nLeft = nLen;
        while (nLeft >= 2) {
                if ('-' == src[i] && (i > 0)) {
                }
        }
}

int main()
{
        int a[15] = { 10, 25, 4, 2, 5, 7, 4, 88, 5, 66, 15, 20, 14, 11, 20 };
        int b[15] = { 10, 25, 4, 2, 5, 7, 4, 88, 5, 66, 15, 20, 14, 11, 20 };
        int n = sizeof(a) / sizeof(a[0]);
        shellsort(a, n);
        my_sort(b, n);

        // int v = atoi(a);
        /*for (int i = 0; i < n; i++)
        {
          printf("%d   ",a[i]);
        }
          printf(" \n");

        for (int i = 0; i < n; i++)
        {
          printf("%d   ",b[i]);
        }*/
        char c[] = "nb";
        reverse(c);
}