#include <stdio.h>

#include <conio.h>
/* c编写一个将输入复制到输出的程序，并将其中的制表符替换为入七，把回退符替换为\b，把反斜杠替按为\\。这样可以将制表符和回退符以可见的方式显示出来 */
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
