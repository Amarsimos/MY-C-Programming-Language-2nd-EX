#include<stdio.h>
#include<limits.h>

int lowerl(int c)
{
	int z;
	z = ((c >= 'A') && (c <= 'Z')) ? c = c - 'A' + 'a' : c;
}


int main()
{
	int m = lowerl('P');
	printf("%c",m);
}    
void my_first(int x,char y)
{
  if (x <= 1)
  {
    x += 1;
  }
  x -= 1;
}

// 1000 1111 
// 0000 0001
// 
// 0000 0001
