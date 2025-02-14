#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <ctype.h>
#include "4-3-mygetch.h"
#define MAXOP 100
#define NUMBER '0'


int getop(char s[])
{
        int i = 0;
        int  c = mgetch();
        while ((c != '\n') && (isspace(c))) {
                c = mgetch();
        }
        if ((!isdigit(c)) && ('.' != c)) {
                s[0] = c;
                s[1] = '0';
                return c;                
        }

        //int part
        while ((isdigit(c))) {
                s[i++] = c;
                c = mgetch();
        }
        //point part
        if (c == '.') {
                s[i++] = c;
                c = mgetch();
        
        }
        s[i] = '\0';

        if (c != EOF) {
                ugetch(c);
        }
        return NUMBER;


}


int main()
{
        int type = 0;
        char s[MAXOP] = { 0 };
        type = getop(s);
        while (type != EOF) {
                switch (type) {
                        case NUMBER:
                                printf("\t%.8g\n", atof(s));
                                break;
                        default:
                                printf("\t%c", type);
                                break;
                }
                type = getop(s);
                
        }
}



/*int main()//test
{
        ugetch('0');
        ugetch('1');
        ugetch('2');
        ugetch('3');
        ugetch('4');

        int x1 = mgetch();
        int x2 = mgetch();
        int x3 = mgetch();
        int x4 = mgetch();
}*/