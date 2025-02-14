#include<stdio.h>
#include<limits.h>

int lowerl(int c)
{
	int z;
	z = ((c >= 'A') && (c <= 'Z')) ?  (c - 'A' + 'a') : c;
}

 

int main()
{
	int m = lowerl('P');
	printf("%c",m);
}    

// 1000 1111 
// 0000 0001
//  
// 0000 0001
