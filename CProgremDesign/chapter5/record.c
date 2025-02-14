#include <stdio.h>
#include <string.h>
void main(void)
{
}
void readin()
{
    ...
}

void display(struct wks *p)
{
    ...
}

void srt()
{
    ...
}

void delwk()
{
    ...
}

int menu()
{
    int c;
    printf("\n1.input worker's original data\n");
    printf("2.display worker's original data\n");
    printf("3.display worker's short data\n");
    printf("4.delete worker's short data\n");
    printf("5.Goodbye!\n");
    printf("please input your selection 1-5:");
    scanf("%d", &c);
    return c;
}

void main()
{
    int d;
    for (;;)
    {
        d = menu();
        switch (d)
        {
        case 1:
            readin();
            break;
        case 2:
            display(wksfull);
            break;
        case 3:
            srt();
            break;
        case 4:
            delwk();
            break;
        case 5:
            printf("Goodbye!\n");
            exit();
        default:
            printf("input error!please input again!\n");
            break;
        }
    }
}
