#include<stdio.h>
#include<limits.h>
unsigned int minvert(unsigned int x, int p , int n )
{
	int nStartBit = p + 1 - n;	
	unsigned int  nMaxValue = ~(~0 << n);//00000111,n个1 
	int b = ~x;// 将x按位取反 ,0100 0011
	int a = ~(nMaxValue << nStartBit);//1100 0111,把1移到开始位 ,取反 
	x = x & a;//保留1的位,并赋给x ,1011 1100->1000 0100,保留其他的位,清0要移动的位 
	unsigned int c = b & ~a;// 保留取反位,其他位置零 
	
	
	return x | c;//1010 1100,保留其他位,与0或=本身;保留设置位,x中对应位为0,y中对应位则保留 
}


int main()
{
	unsigned int z = 0xbc;//1011 1100
	
	unsigned int y = minvert(z,3,3);//5=0000 0101
	printf("%x\n%x",z,y);
	//x = x & 0177; 
	//x = x >> 2; 
}   

// 1110 0011 a
// 0001 1100 ~a
// 1011 1100 z
// 1010 0000 x
// 0100 0011 b
// 0000 0000 c
// 1010 0000 y
// 1010 0000 y
// 1110 0011 1100 0001
// 0000 0000 0000 0000
// 0001 1100 1100 0001
