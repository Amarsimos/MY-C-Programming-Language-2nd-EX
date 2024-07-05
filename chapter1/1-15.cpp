// 练习1-15. 改写1.2 节中的温度转换程序，用一个函数完成温度转换。
#include <stdio.h>
float f2c(int a); // float为返回值类型 int a为输入参数
int main()
{
	int i;
	for (i = 0; i <= 300; i = i + 10)
		printf("%2.2f\t%2d\n", f2c(i), i);
	return 0;
}
// 以下为函数原型,必须与开头声明的一致,最好通过名字说明参数名
float f2c(int fhar)
{ // 此函数内的变量完全独立,对外部不可见
	float cc;
	cc = (5.0 / 9.0) * (f - 32.0);
	return cc; // cc可以为任何表达式 ,0为正常退出
}
__TIMESTAMP__
__TIME__
__DATE__
__FILE__
