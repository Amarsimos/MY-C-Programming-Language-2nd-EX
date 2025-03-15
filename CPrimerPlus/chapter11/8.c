#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

char *string_in(char *str1, char *str2);
char *mystrncpy(char *dest, char *src, int n);
int main(void)
{
    while (1)
    {
        char str1[MAX_LEN];
        char ch;
        // char *p = "0";//定义一个指向字符"0"的指针p，这里实际上是错误的用法，应该是指向字符数组或其他可修改的内存区域
        // char *q = "0";
        char str2[MAX_LEN] = "ok";
        char *p;
        int i = 0;
        while ((ch = getchar()) != '\n') // 输入超过数组的字符时会索引不到
        {
            str1[i++] = ch;
        }
        while (i < MAX_LEN)
        {
            str1[i++] = '\0';
        }

        p = string_in(str1, str2);
        if (p == NULL) // NULL是指针类型,最好不要和0比较
        {
            printf("No word found.\n");
        }
        else
        {
            printf("%p,%c\n", p, *p); // 这里使用dest1而不是*dest1,*dest1指向dest的第一个字符,并不是字符串
        }
    }
    return 0;
}

char *string_in(char *str1, char *str2)
{
    char *dst_str1 = str1;
    char *ori_str2 = str2;
    int flag = 0;
    while (*str1 != '\0')
    {
        if (*str2 == '\0')
        {
            return dst_str1;
        }
        if (*str1 == *str2)
        {
            if (!flag)
            {
                flag = 1;
                dst_str1 = str1;
            }
            str1++;
            str2++;
        }
        else
        {
            str2 = ori_str2;
            flag = 0;
            str1++;
        }
    }
    if (*str2 != '\0')
        return NULL;
    else
        return dst_str1;
}