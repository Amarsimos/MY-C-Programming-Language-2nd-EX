
#include <stdio.h>
#include <stdlib.h>

int *make_array(int elem, int val);
void show_array(const int ar[], int n);
int main(void)
{
    int *pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        printf("Enter the initialization value:");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("ENter the number of elements(<1 to quit):");
    }
    printf("Bye!\n");
    return 0;
}

int *make_array(int elem, int val)
{
    int *pa;
    pa = (int *)malloc(elem * sizeof(int)); // allocate memory and use array notation to access it
    for (int i = 0; i < elem; i++)
    {
        pa[i] = val;
    }
    return pa;
}

void show_array(const int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 8 == 0 && i > 7)
        {
            printf("\n");
        }
        printf("%d ", ar[i]);
    }
    printf("\n");
}