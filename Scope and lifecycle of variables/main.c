#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//int g_val = 2022;//全局变量

//声明add.c里的g_val
extern int g_val;

int main()
{
	
	printf("1:%d", g_val);
	{
		int a = 10;
		printf("2:%d\n", a);
	}
	printf("3:%d", g_val);
	
	return 0;
}