#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������

//int g_val = 2022;//ȫ�ֱ���

//����add.c���g_val
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