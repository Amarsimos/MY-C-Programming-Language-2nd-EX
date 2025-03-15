#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

char *mystrncpy(char *dest, char *src, int n);
int main(void)
{
    while (1)
    {
        char src[MAX_LEN];
        char ch;
        // char *p = "0";//定义一个指向字符"0"的指针p，这里实际上是错误的用法，应该是指向字符数组或其他可修改的内存区域
        // char *q = "0";
        char dest[MAX_LEN];
        char *dest1;
        int i = 0;
        while ((ch = getchar()) != '\n')
        {
            src[i++] = ch;
        }
        while (i < MAX_LEN)
        {
            src[i++] = '\0';
        }
        dest1 = mystrncpy(dest, src, 5); // 自定义函数搜索字符串中第一个字符
        if (dest == 0)                   // NULL是指针类型,最好不要和0比较
        {
            printf("No word found.\n");
        }
        else
        {
            printf("%s\n", dest1); // 这里使用dest1而不是*dest1,*dest1指向dest的第一个字符,并不是字符串
        }
    }
    return 0;
}

char *mystrncpy(char *dest, char *src, int n) // 函数原型需要初始化指针,此处最好使用数组提前分配好内存,如果未初始指针化则会出现错误
{
    char *oringin = dest;
    int len = strlen(src);
    if (len >= n)
    {
        for (int i = 0; i < n; i++)
        {
            *dest = *src;
            dest++;
            src++;
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            *dest = *src;
            dest++;
            src++;
        }
        for (int i = len; i < n; i++)
        {
            *dest++ = '\0';
        }
    }
    return oringin;
}