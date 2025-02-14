#include <stdio.h>
#include <limits.h>
#define BUFLEN 100

void escape(char dst[], char src[])
{
  int i = 0;
  int j = 0;

  while (src[i] != '\0')
  {
    switch (src[i])
    {
    case '\t': // through
      dst[j++] = '\\';
      dst[j++] = 't';
      break;
    case '\n': // through
      dst[j++] = '\\';
      dst[j++] = 'n';
      break;
    case '\r': // through
      dst[j++] = '\\';
      dst[j++] = 'r';
      break;
    case '\\': // through
      dst[j++] = '\\';
      dst[j++] = '\\';
      break;

    default:
      dst[j++] = src[i];
      break;
    }
    i++;
  }
  dst[j] = '\0';
}

void rescape(char dst[], char src[])
{
  int i = 0;
  int j = 0;

  while (src[i] != '\0')
  {
    if ('\\' == src[i])
    {
      switch (src[i + 1])
      {
      case 't': // through
        dst[j++] = '\t';
        break;
      case 'n': // through
        dst[j++] = '\n';
        break;
      case 'r': // through
        dst[j++] = '\r';
        break;
      case '\\': // through
        dst[j++] = '\\';
        break;
      default:
        printf("error\n");
        break;
      }
      i++;
    }
    else
    {
      dst[j++] = src[i];
    }
    i++;
  }
  dst[j] = '\0';
}

int main()
{
  char t[BUFLEN] = {
      0,
  };
  char e[BUFLEN] = {
      0,
  };
  char s[BUFLEN] = {
      0,
  };
  int c = getchar();
  int i = 0;
  while (c != EOF)
  {
    t[i++] = c;
    c = getchar();
  }
  rescape(e, t);
  printf("%s", e);
}