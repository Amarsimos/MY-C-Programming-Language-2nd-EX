#include "4-3-mygetch.h"
#include <stdio.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;


int mgetch(void)
{
        if (bufp > 0) {
                bufp--;
                return buf[bufp];
        }
        else {
                return getchar();
        }
}


void ugetch(int c)
{
        if (bufp >= BUFSIZE) {
                printf("stack overflow 1\n");
        }
        else {
                buf[bufp] = c;
                bufp++;
        }
}
