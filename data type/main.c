#include <stdio.h>

int main()
{
	//字符类型
	char ch = 'a';
	//整型
	int age = 20;
	//短整型
	short num = 10;
	//long
	//long long
	//单精度浮点型
	float weight = 55.5;
	//双精度浮点型
	double d = 0.0;

	printf("%d", 100);//打印整数
	//sizeof - 关键字 - 操作符 - 计算机类型或者变量所占空间的大小
	printf("%d", sizeof(char));
	printf("%d", sizeof(short));
	printf("%d", sizeof(int));
	printf("%d", sizeof(long));
	printf("%d", sizeof(long long));
	printf("%d", sizeof(float));
	printf("%d", sizeof(double));

	return 0;
}