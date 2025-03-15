#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

int delete_space(char *str);
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

        delete_space(str1); // 调用函数删除空格
        if (str1 == NULL)   // NULL是指针类型,最好不要和0比较
        {
            printf("No word found.\n");
        }
        else
        {
            printf("%s,%c\n", str1, *str1); // 这里使用dest1而不是*dest1,*dest1指向dest的第一个字符,并不是字符串
        }
    }
    return 0;
}

int delete_space(char *str) // 直接对原数组的指针进行操作，不需要返回值
{
    char *tmp = str;
    while (*str != '\0')
    {
        if (*str != ' ')
        {
            *tmp = *str;
            tmp++;
        }
        str++;
    }
    *tmp = '\0';
    // str = tmp;
    // return tmp;//返回函数内部的值会被销毁，不要使用函数内部的值
    return 0; // 返回指针,指向第一个非空字符的位置j
}