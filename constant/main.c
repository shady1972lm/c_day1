#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//#define MAX 10000
////常量
////1.字面常量
//int main()
//{
//	//字面常量
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	//2.const修饰的常变量
//	const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//	//num = 20;//报错
//	printf("%d\n", num);
//
//	int arr[10] = { 0 };
//
//	const int n = 10;
//
//	//int arr2[n] = { 0 };//n是变量
//
//	//3.#define定义的标识符常量
//	//MAX = 2000;//报错
//	int n2 = MAX;
//	printf("n2 = %d\n", n2);
//
//	return 0;
//}

enum Sex
{
	//这种枚举类型的变量的未来可能取值
	//枚举常量
	MALE = 3,//赋初值
	FEMALE,
	SECRET
};

int main()
{
	//4.枚举常量
    //可以一一列举的常量

	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}