#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

char *search_word(char *str, char *ch);
int main(void)
{
    while (1)
    {
        char str[MAX_LEN];
        char ch;
        char *p;
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
        q = strchr(str, 'a');
        p = search_word(str, "a");
        if (p == NULL)//直接打印NUL会导致程序崩溃
        {
            printf("No word found.\n");
        }
        else
        {
            printf("%p,%c\n", p, *p);
            printf("%p,%c\n", q, *q);
        }
    }
    return 0;
}

char *search_word(char *str, char *ch)
{
    while (*str != '\0')
    {
        if (*str == *ch)
            return str;
        else
            // return NULL;不能直接返回NULL，否则会在第一个不匹配中直接返回,应该在循环结束后返回NULL
            str++;
    }
    return NULL;
}