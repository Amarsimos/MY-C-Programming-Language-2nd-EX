#include<stdio.h>
#include<windows.h>
#include<string.h>
int strindex1(char s[], char t[])
{
        int i = 0;
        while (s[i] != '\0') {
                int k = 0;
                while (t[k] != '\0') {
                        if (s[i + k] != t[k]) {
                                break;
                        }
                        k++;
                }

                if ((k > 0) && (t[k] == '\0')) {
                        return i;
                }
        }
        return -1;
}
int strindex(char s[], char t[])
{
        int i = strlen(s) - 1;
        
        while (i >= 0) {
                int k = 0;
                while (t[k] != '\0') {
                        if (s[i + k] != t[k]) {
                                break;
                        }
                        k++;
                }

                if ((k > 0) && (t[k] == '\0')) {
                        return i;
                }
                i--;
        }
                return -1;
}
int getline(char s[], int lim)
{
        int nLeft = lim;
        int i = 0;

        while (nLeft > 1) {
                int c = getchar();
                if (EOF == c) {
                        break;
                }
                else if ('\n' == c) {
                        s[i++] = c;
                        nLeft--;
                        break;
                }
                else {
                        s[i++] = c;
                        nLeft--;
                }
        }

        if (lim > 0) {
                s[i] = '\0';
        }
        return i;

}

#define  MAXLINE 1000
int main()
{
        char line[MAXLINE] = { 0, };
        int found = 0;

        int nLine = getline(line, MAXLINE);
        while (nLine > 0) {
                if (strindex(line, "ould") >= 0) {
                printf("+++%s", line);
                }
                nLine = getline(line, MAXLINE);
        }
}