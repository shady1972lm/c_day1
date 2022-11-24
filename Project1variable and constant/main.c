#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int a = 100;//全局变量 - {}外部定义的
int main()
{
	////创建一个变量
	////类型 变量名 = 值;//推荐
	////类型 变量名;//不推荐

	//int age = 20;
	//double weight = 65.2;
	////当局部变量和全局变量名字冲突，局部优先
	//int a = 10;//局部变量 - {}内部定义的

	//age = age + 1;
	//weight = weight + 5;
	//printf("%d", age);
	//printf("%lf", weight);
	//printf("%d", a);

	//求两整数的和
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}
//%d - 整型
//%f - float
//%lf - double