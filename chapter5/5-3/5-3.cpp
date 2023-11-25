#include <stdio.h>
/* strcat：将t 拼接到s 的末尾；s 必须够大 */ 
void strcat1( char *s, char *t) 
{ 
        // int i, j; 
         
        // i = j = 0; 
        while (*s != '\0')  /* 找到s 的末尾 */
                s++;
        while (*t != '\0')  /* 复制t */
        {
                *s = *t;
                s++;
                t++;
        }
        *s = '\0';
}
void strcat2(char *s, const char *t) {
    while (*s != '\0')  /* 找到s的末尾 */
        s++;

    while ((*s++ = *t++) != '\0')  /* 复制t */
        ;
}

main()
{
        char s[100] = "hello";//要点在于创建字符串数组时要足够大,不然在复制的时候,指针会越界
        char t[100] = "world";
        // strcat2(s, t);
        strcat1(s, t);
        printf("%s", s);

}