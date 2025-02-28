#include <stdio.h>
#define MAX_LEN 10

char *get_n_chars(char *str, int n);
int main(void)
{
    while (1)
    {
        char str[MAX_LEN];
        char *ptr;
        int n = 5;
        ptr = get_n_chars(str, n);
        printf("%s\n", ptr);
    }
    return 0;
}

char *get_n_chars(char *str, int n)
{
    char ch;
    int i = 0;
    for (i = 0; i < n; i++) // 输入在缓存区内,当缓存区内不足5字符会要求继续输入,导致显示会在下一次输入时才更新
    {
        ch = getchar();
        if (ch == '\n')
            str[i] = '*';
        else if (ch != EOF)
            str[i] = ch; // 将结果存在数组
        else
            break;
    }
    if (ch == EOF)
        return NULL;
    else
    {
        str[i] = '\0';
        return str; // 返回数组的地址
    }
}

// #include <stdio.h>

// #define LEN 10
// // 获取n个字符
// char *get_n_char(char *str, int n);

// int main(void)
// {
//     char input[LEN];
//     char *ret_val;
//     int n = LEN - 1;

//     while (1)
//     {
//         printf("Please enter chars:\n");
//         ret_val = get_n_char(input, n);
//         if (ret_val == NULL)
//         {
//             puts("Input failed.");
//         }
//         else
//         {
//             printf("%d chars: ", n);
//             puts(input);
//         }
//         puts("Done.");
//     }

//     return 0;
// }

// char *get_n_char(char *str, int n)
// {
//     int i;
//     char ch;
//     // for循环n次，取出n个字符，存储到str数组中
//     for (i = 0; i < n; i++)
//     {
//         ch = getchar();
//         if (ch != EOF)
//             str[i] = ch;
//         else
//             break;
//     }

//     if (ch == EOF)
//         return NULL;
//     else
//     {
//         // 赋给str数组的最后一个元素为空字符
//         str[i] = '\0';
//         return str;
//     }
// }
