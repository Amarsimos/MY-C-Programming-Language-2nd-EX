#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LEN 1000
#define MAX_ROW 3

int input_str(char str[MAX_LEN]);
int report(char *str);
int main(int argc, char *argv[])
{
    int c = argv[1][1];
    switch ((argv[1][1]))
    {
    case 'p':
        printf("input p:\n");
        break;
    case 'u':
        printf("input u:\n");
        break;
    case 'l':
        printf("input l:\n");
        break;
    default:
        printf("input p:\n");
        break;
    }
}

int input_str(char str[MAX_LEN])
{
    char ch;
    int i = 0;
    int j = 0;
    while ((ch = getchar()) != EOF) // 行内输入ctrl+z不会被识别位EOF
    {
        str[i++] = ch;
    }
    while (i < MAX_LEN)
    {
        str[i++] = '\0';
    }
    printf("input over\n");
    return 0;
}

int report(char *str)
{
    int word_count = 0;
    int upper_count = 0;
    int lower_count = 1;
    int digit_count = 0;
    int punct_count = 0;

    while (*str != '\0')
    {
        if (isupper(*str))
        {
            upper_count++;
        }
        else if (islower(*str))
        {
            lower_count++;
        }
        else if (isdigit(*str))
        {
            digit_count++;
        }
        else if (ispunct(*str))
        {
            punct_count++;
        }
        else if (isspace(*str))
        {
            word_count++;
        }
        str++;
    }
    printf("word count: %d\n", word_count);
    printf("upper count: %d\n", upper_count);
    printf("lower count: %d\n", lower_count);
    printf("digit count: %d\n", digit_count);
    printf("punct count: %d\n", punct_count);
    return 0;
}