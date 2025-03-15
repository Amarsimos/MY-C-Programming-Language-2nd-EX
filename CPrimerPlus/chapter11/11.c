#include <stdio.h>
#include <string.h>

#define MAX_LEN 10
#define MAX_ROW 3

int input_str(char str[MAX_ROW][MAX_LEN]);
int menu5(int opt, char str[MAX_ROW][MAX_LEN]);
int main(void)
{
    while (1)
    {
        // char *p = "0";//定义一个指向字符"0"的指针p，这里实际上是错误的用法，应该是指向字符数组或其他可修改的内存区域
        // char *q = "0";
        char str1[MAX_ROW][MAX_LEN];
        char str2[MAX_LEN] = "ok";
        char *p;
        int opt;
        printf("input string:\n");
        input_str(str1); // 调用函数输入字符串
        printf("input option: ");
        scanf("%d", &opt);
        int retu = menu5(opt, str1); // 调用函数处理选项
        if (retu == 1)
        {
            break;
        }
    }
    return 0;
}

int input_str(char str[MAX_ROW][MAX_LEN])
{
    char ch;
    int i = 0;
    int j = 0;
    int count = MAX_ROW;
    while (count)
    {
        while ((ch = getchar()) != '\n' && ch != EOF) // 行内输入ctrl+z不会被识别位EOF
        {
            str[j][i++] = ch;
        }
        while (i < MAX_LEN)
        {
            str[j][i++] = '\0';
        }
        count--;
        i = 0;
        j++;
        if (ch == EOF)
        {
            break;
        }
    }
    printf("input over\n");
    return 0;
}
// int read_str(char *str, int opt)
// {
// }
int menu5(int opt, char str[MAX_ROW][MAX_LEN])
{
    switch (opt)
    {
    case 1: // 打印字符串列表
        printf("Printing string list...\n");
        for (int i = 0; i < MAX_ROW; i++)
        {
            printf("%s\n", str[i]);
        }
        return 0;
        break;
    case 2: // 以ASCII码顺序打印字符串
        printf("Printing string in ASCII code...\n");
        char *p[MAX_ROW];
        for (int i = 0; i < MAX_ROW; i++)
        {
            p[i] = str[i];
            printf("%d,%s\n", *p[i], p[i]);
        }
        for (int i = 0; i < MAX_ROW; i++) // 排序
        {
            for (int j = i; j < MAX_ROW; j++)
            {
                if (*p[i] > *p[j])
                {
                    char *temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
        for (int i = 0; i < MAX_ROW; i++)
        {
            printf("%s\n", p[i]);
        }

        return 0;
        break;
    case 3: // 长度递增顺序打印
        printf("Printing string in length order...\n");
        char *p1[MAX_ROW];
        int len[MAX_ROW];
        for (int i = 0; i < MAX_ROW; i++)
        {
            // int len[i] = strlen(str[i]);//不要使用int进行声明了,前面声明过了
            len[i] = strlen(str[i]); // 不要使用int进行声明了,前面声明过了
            p[i] = str[i];
        }
        for (int i = 0; i < MAX_ROW; i++)
        {
            for (int j = i; j < MAX_ROW; j++)
            {
                if (len[i] > len[j])
                {
                    int temp1 = len[i];
                    len[i] = len[j];
                    len[j] = temp1;
                    char *temp2 = p[i];
                    p[i] = p[j];
                    p[j] = temp2;
                }
            }
        }
        for (int i = 0; i < MAX_ROW; i++)
        {
            printf("%s\n", p[i]);
        }
        return 0;
        break;
    case 4: // 按字符串第一个单词的长度打印
        printf("Printing string by length of first word...\n");
        int len1[MAX_ROW];
        for (int i = 0; i < MAX_ROW; i++)
        {
            int j = 0;
            int count = 0;
            while (str[i][j] != ' ' && str[i][j] != '\0')
            {
                j++;
                count++;
            }
            len1[i] = count;
        }
        for (int i = 0; i < MAX_ROW; i++)
        {
            // int len[i] = strlen(str[i]);//不要使用int进行声明了,前面声明过了
            len[i] = strlen(str[i]); // 不要使用int进行声明了,前面声明过了
            p[i] = str[i];
        }
        for (int i = 0; i < MAX_ROW; i++)
        {
            for (int j = i; j < MAX_ROW; j++)
            {
                if (len1[i] > len1[j])
                {
                    int temp1 = len1[i];
                    len1[i] = len1[j];
                    len1[j] = temp1;
                    char *temp2 = p[i];
                    p[i] = p[j];
                    p[j] = temp2;
                }
            }
        }
        for (int i = 0; i < MAX_ROW; i++)
        {
            printf("%s\n", p[i]);
        }

        return 0;
        break;
    case 5: // 退出
        printf("Exiting...");
        return 1;
    }
}