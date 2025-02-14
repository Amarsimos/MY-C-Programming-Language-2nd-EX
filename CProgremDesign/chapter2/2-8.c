#include<stdio.h>
#include<limits.h>
unsigned int  RightRot(unsigned int a , int n)
{
	unsigned int  nMaxValue = ~(~0 << n);
	int b = nMaxValue & a;//提取n位
	a = a >> n;//右移n位 
	b = b << (32 - n);//将提取的位左移至最高位 
	return a | b;//相或全部保留 
}

int main()
{
	int x = 0xbc;
	int y = RightRot(x,4);
	printf("%x",y);
}   

// 1000 1111 
// 0000 0001
//  
// 0000 0001
