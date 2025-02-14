#include <stdio.h>

int main(void)
{
    int ch[] = {0, 1, 2, 3};
    int *pch = &ch[0];
    pch += 1;
    printf("Address of ch is %p\n", pch);
    printf("Address of ch is %p\n", ch);
    return 0;
}