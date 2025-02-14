#include <stdio.h>
#define FIRESTGUESS 50
#define MAX_NUM 100
#define MIN_NUM 0

void menu(void);
float operation(float fnum1, float fnum2, char op);

int main()
{
    float fnum1, fnum2;
    char op;

    menu();
    printf("Enter the operation: ");
    scanf("%c", &op);
    while (op != 'q' && op != 'a' && op != 's' && op != 'm' && op != 'd') // 测试输入的操作是否合法,不合法一直循环
    {
        printf("Error: Invalid operation.\n");
        printf("Please enter a valid operation:\n");
        scanf("%c", &op);
    }

    if (op == 'q')
    {
        printf("Goodbye!\n");
        return 0;
    }
    else
    {
        printf("Enter the first number: ");
        scanf("%f", &fnum1);
        printf("Enter the second number: ");
        scanf("%f", &fnum2);
    }

    if (op == 'd')
    {
        while (0 == fnum2) // 测试除数是否为0,为0一直循环
        {
            printf("Error: Division by zero.\n");
            printf("Please enter a non-zero number for the second number.\n");
            scanf("%f", &fnum2);
        }
        printf("Result: %.2f\n", operation(fnum1, fnum2, op));
    }
    else
    {
        printf("Result: %.2f\n", operation(fnum1, fnum2, op));
    }
    printf("Press any key to continue...\n");
    getchar();
    getchar();
    printf("**********************************************\n");
    main(); // 递归调用main函数
    return 0;
}
void menu(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a. Addition\n");
    printf("s. Subtraction\n");
    printf("m. Multiplication\n");
    printf("d. Division\n");
    printf("q. quit\n");
}
float operation(float fnum1, float fnum2, char op)
{
    float result;
    switch (op)
    {
    case 'a':
        result = fnum1 + fnum2;
        break;
    case 's':
        result = fnum1 - fnum2;
        break;
    case 'm':
        result = fnum1 * fnum2;
        break;
    case 'd':
        result = fnum1 / fnum2;
        break;
    default:
        printf("Error: Invalid operation.\n");
        result = 0;
        break;
    }
    return result;
}