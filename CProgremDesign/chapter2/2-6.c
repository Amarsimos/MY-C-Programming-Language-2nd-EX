#include<stdio.h>
#include<limits.h>
unsigned int setbits(unsigned int x, int p , int n ,unsigned int y)
{
	int nStartBit = p + 1 - n;	
	unsigned int  nMaxValue = ~(~0 << n);//00000111,n个1 
	int a = ~(nMaxValue << nStartBit);//1100 0111,把1移到开始位 ,取反 
	x = x & a;//保留1的位,并赋给x ,1011 1100->1000 0100,保留其他的位,清0要移动的位 
	
	y = y << nStartBit;//将y左移n位 ,0010 1000,将设置的位移到指定位置, 
	
	
	return x | y;//1010 1100,保留其他位,与0或=本身;保留设置位,x中对应位为0,y中对应位则保留 
}


int main()
{
	int x = 0xbc;//1011 1100
	int y = setbits(x,4,3,5);//5=0000 0101
	//x = x & 0177; 
	//x = x >> 2; 
}   

// 1000 1111 1110 0001
// 1110 0011 1100 0001
