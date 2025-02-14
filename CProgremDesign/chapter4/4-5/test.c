#include <stdio.h>
void swap(int *px, int *py)  /* WRONG */
{
        int temp;
        temp = *px;
        *px = *py;
        *py = temp;
}
main()
{
        int a = 1;
        int b = 2;
        int *pa = &a;
        swap(&a, &b);
        printf("a = %d\nb = %d", a, b);
}
