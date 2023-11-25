int strend(char *s, const char *t) {
        if (*s == *t) {
                while (*s == *t) {
                        s++;
                        t++;
                }
                if (*s == '0') {
                        return 1;
                }
                return 0;
        }
        else {
                while (*s != *t) {
                        s++;
                        // t++;
                        if (*s == *t) {
                                while (*s == *t) {
                                        s++;
                                        t++;
                                }
                                if (*s == '\0') {
                                        return 1;
                                }
                                return 0;
                        }
                }
        }
}
int main()
{
        char s[] = "helloworld";
        const char t[] = "worl";
        int i = strend(s, t);
        printf("%s", s);
        return 0;
}