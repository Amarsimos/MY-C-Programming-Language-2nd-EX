
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **make_array(int elem);
char *make_array_sub(int size);
void show_array(char *ar[], int n);
int main(void)
{
    char *pa;
    char **ppa;
    int size;
    int value;
    int tmp_size;
    char tmp[10] = {0};

    printf("How many words do you want to enter? (enter a number <1 to quit):");
    while (scanf("%d", &size) == 1 && size > 0)
    {
        ppa = make_array(size); // allocate memory for the array
        printf("Enter %d words now:", size);
        for (int i = 0; i < size; i++)
        {
            scanf("%s", tmp); //
            // tmp_size = sizeof(tmp);
            tmp_size = strlen(tmp) + 1;
            ppa[i] = make_array_sub(tmp_size); // allocate memory for the string
            strcpy(ppa[i], tmp);               // copy the string to the array
        }

        if (ppa)
        {
            show_array(ppa, size);
            free(pa);
        }
        printf("ENter the number of elements(<1 to quit):");
    }
    printf("Bye!\n");
    return 0;
}

char **make_array(int elem)
{
    char **ppa;
    ppa = (char **)malloc(elem * sizeof(char *)); // allocate memory for pointers
    return ppa;
}

char *make_array_sub(int size)
{
    char *pa;
    pa = (char *)malloc(size * sizeof(char)); // allocate memory for the array
    return pa;
}

// void show_array(char *ar, int n)
// void show_array(char ar[], int n)
// 等价的，都可以用来表示一个指向字符串的指针数组。
// notice the transfer of array and pointer to the function.
void show_array(char *ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s ", ar[i]);
    }
    printf("\n");
}