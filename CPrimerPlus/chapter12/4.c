
#include <stdio.h>
int count = 0;

int count_self(void);
int main(void)
{
    int i = 0;
    int c = 0;
    while (i < 100)
    {

        c = count_self();
        i++;
    }
    printf("%d\n", c);
    return 0;
}

int count_self(void)
{
    count++;
    return count;
}