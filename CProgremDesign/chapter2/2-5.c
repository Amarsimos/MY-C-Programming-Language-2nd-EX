#include<stdio.h>
#include<limits.h>
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


int any(char s1[],char s2[])
{
	int i = 0;
	
	for (i = 0;s1[i] !='\0'; i++){
		int c = s1[i];
		if (IsCharExist(s2,c)){
			return i+1;
		}
		
	}
	return -1;
} 

int any2(char s1[],char s2[])//优化后不用每次都循环遍历 
{
	int i = 0;
	unsigned char map[UCHAR_MAX+1];
	for (i = 0;i < UCHAR_MAX+1;i++) {
		map[i] = 0;
	}
	for (i = 0; s2[i] != '\0'; i++){
		map[(unsigned char)s2[i]] =1;
	}
	
	for (i = 0;s1[i] !='\0'; i++){
		int c = s1[i];
		if (map[c] == 1){
			return i+1;
		}
		
	}
	return -1;
} 


int main()
{
	char *q = "abc12345";
	char *t = "zzz2ddd";
	int n = any(q,t);
	printf("%d",n);
}
