#include <stdio.h>

#include <conio.h>
/* c��дһ�������븴�Ƶ�����ĳ��򣬲������е��Ʊ���滻Ϊ���ߣ��ѻ��˷��滻Ϊ\b���ѷ�б���水Ϊ\\���������Խ��Ʊ���ͻ��˷��Կɼ��ķ�ʽ��ʾ���� */
main()
{
int c;

while ((c = getch()) != EOF) {
	if(c == '\t'){
		printf("\\t");		
	}
		
	else if(c == '\b'){
		printf("\\b");		
	}
	else if(c == '\\'){
		printf("\\\\");		
	}
	else {
	putchar(c);
	}
//	 getch();
//printf("ns:%d",ns);
}
}
