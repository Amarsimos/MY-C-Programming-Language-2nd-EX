#include <stdio.h>
float f2c(int a);//floatΪ����ֵ���� int aΪ������� 
main(){
	int i;
	for (i = 0;i <= 300;i = i+10)
		printf("%2.2f\t%2d\n",f2c(i),i);
		return 0;
}
//����Ϊ����ԭ��,�����뿪ͷ������һ��,���ͨ������˵�������� 
float f2c(int fhar){//�˺����ڵı�����ȫ����,���ⲿ���ɼ� 
	float cc;
	
	cc = (5.0/9.0) * (f-32.0);
	return cc;//cc����Ϊ�κα��ʽ ,0Ϊ�����˳� 
}
