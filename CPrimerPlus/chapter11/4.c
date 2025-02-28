#include <stdio.h>
#define MAX_LEN 10

char *get_n_chars(char *str, int n);
char *get_word(char *str, int n);
int main(void)
{
    while (1)
    {
        char str[MAX_LEN];
        char *ptr;
        int n = 5;
        get_word(str, n);
        printf("%s\n", str);
    }
    return 0;
}

char *get_word(char *str, int n)
{

    char ch;
    int i = 0;
    int flag = 0;
    // while ((ch = getchar()) == ' ' && ch == '\t') //这个条件永远为假，因为一个字符不能同时等于空格和制表符
    while ((ch = getchar()) == ' ' || ch == '\t') // 跳过空字符
        ;
    *str++ = ch; // 将上一次调用的非空字符赋值给str
    i++;         // 字符计数器加1

    // while ((ch = getchar()) != ' ' || ch != '\t' || ch != '\n') // 条件总为真
    while ((ch = getchar()) != ' ' && ch != '\t' && ch != '\n') // 将剩余的非空字符赋值给str
    {
        if (i++ <= n - 1) // 字符计数器加1
            *str++ = ch;
        else // 字符计数器超过n-1,则跳过该字符
            ;
    }
    *str = '\0';

    if ('\n' == ch) // 如果遇到换行符,则舍弃剩余的字符
        return str;
    else // 否则,继续读取知道遇到换行符
    {
        while (ch = getchar() != '\n') // 知道一行结束,也就是换行符,舍弃剩余的字符
            ;
        return str;
    }
}