#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

int is_within(char c, char *str);
char *search_word(char *str, char *ch);
int main(void)
{
    while (1)
    {
        char str[MAX_LEN];
        char ch;
        int p;
        char *q;
        int i = 0;
        while ((ch = getchar()) != '\n')
        {
            str[i++] = ch;
        }
        while (i < MAX_LEN)
        {
            str[i++] = '\0';
        }
        p = is_within('a', str); // 自定义函数搜索字符串中第一个字符
        if (p == 0)              // NULL是指针类型,最好不要和0比较
        {
            printf("No word found.\n");
        }
        else
        {
            printf("%d\n", p);
        }
    }
    return 0;
}

int is_within(char c, char *str)
{
    // while (c != '\0') // 因为字符c是一个单独的字符，不可能为字符串结束符\0
    while (*str != '\0')
    {
        if (c == *str)
        {
            return 1;
        }
        str++;
    }
    return 0;
}