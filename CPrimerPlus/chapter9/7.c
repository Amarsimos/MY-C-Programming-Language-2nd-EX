#include <stdio.h>
int alpha_pos(int type, char c);
int is_alpha(char c);

double main(void)
{
    while (1)
    {
        char c;
        printf("Enter there double:\n");
        while ((c = getchar()) != '\n')
        {
            int type = is_alpha(c);
            int pos = alpha_pos(type, c);
            printf("%c: %d\n", c, pos);
        }
    }

    return 0;
}
int is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z'))
        return 1;
    else if (c >= 'A' && c <= 'Z')
        return 2;
    else
        return 0;
}
int alpha_pos(int type, char c)
{
    if (type == 1)
        return c - 'a' + 1;
    else if (type == 2)
        return c - 'A' + 1;
    else
        return -1;
}