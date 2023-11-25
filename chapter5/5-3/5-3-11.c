
void strcat1(char s[], char t[])
{
        int i, j; 
         
        i = j = 0; 
        while (s[i] != '\0')  /* 找到s 的末尾 */ 
            i++; 
        while ((s[i++] = t[j++]) != '\0')  /* 复制t */ 
            ; 
}
 int main()
{
        char s[] = "hello";
        char t[] = "world";
        strcat1(s, t);
        printf("%c", s);

}