#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
 /* ��дһ��������ÿ��һ�����ʵ���ʽ��ӡ������ */
main()
{
int c, nl, nw, nc, state;
state = OUT;
while ((c = getchar()) != EOF) {
if (c == ' ' || c == '\n' || c == '\t'){
	state = OUT;
	printf("\n");//ÿ������һ���ո��ӡһ�����з� 
	//state = IN;
}
 
else if (state == OUT) {
//state = IN;
//printf("1");
putchar(c);//���ǿո���������� 
}


}
//printf("%d\n", c);
}
