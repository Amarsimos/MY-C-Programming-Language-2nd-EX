#include <stdio.h>
/* ��дһ�������븴�Ƶ�����ĳ��򣬲������������Ķ���ո���һ���ո��*/
main()
{
int c,ns;//nsΪ��־λ 
ns = 0;//0ʱ���ڿո��� 
while ((c = getchar()) != EOF) {
	
	if(c == ' '){
		if(ns == 1){
			ns = 0;//������spaceʱ,�ж�nsֵ,��ns=1,ִ�����,���һ��space,��ʹns=0��Ч�����ж� 
			putchar(c);
		}
	}
		
	else {
			ns = 1;//����������ʱ,��ns=1,�ȴ���һ�οո������ж� 
			putchar(c);	
	}
}
}
