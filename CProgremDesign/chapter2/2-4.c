#include<stdio.h>
int IsCharExist(char s[], int c)//判断是否存在该字符 
{
	int i = 0;
	while(s[i] != '\0'){//当s2文本未结束 
		if(s[i] == c){//如果c中字符与s[i]中字符相等 
			return 1;//就返回1 
		}
		i++;//然后i自增,不然一直是使用i=0判断 ,循环判断 
	}
	return 0;//一直循环到文本结束,则返回0 
}


void squ(char s1[], char s2[])
{
	int i, j;
	for (i = j = 0;s1[i] != '\0';i++){//初值为0,文本未结束之前一直自增 
		int c = s1[i];//操作为将s1赋值给c 
		
		if (!IsCharExist(s2,c)){//之判断是否存在存在则不进行赋值,开启下一轮循环,不存在则对其赋值 
			s1[j++] = s1[i];
		}
	}
	s1[j] = '\0';
}
int main()
{
	char s[100] = "12 3 abc";
	char *d = "1b ";
	squ(s,d);
	printf("%s\n",d);
	printf("%s\n",s);
	//printf("666");
}
