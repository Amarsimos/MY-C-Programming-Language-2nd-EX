#include <stdio.h>
int chline(char c, int i, int j);

int main(void)
{
    char c;
    int i, j;

    printf("Enter a character and two integers: ");
    scanf("%c%d%d", &c, &i, &j); // scanf函数的特性，scanf遇到 回车(enter)，空格，TAB 就会结束一次输入，空格不会接收
    chline(c, i, j);
    main();
    return 0;
}
int chline(char c, int i, int j)
{
    for (int k = 0; k < j; k++)
    {
        for (int l = 0; l < i; l++)
            printf("%c", c);
        printf("\n");
    }
    return 0;
}
