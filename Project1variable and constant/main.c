#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int a = 100;//ȫ�ֱ��� - {}�ⲿ�����
int main()
{
	////����һ������
	////���� ������ = ֵ;//�Ƽ�
	////���� ������;//���Ƽ�

	//int age = 20;
	//double weight = 65.2;
	////���ֲ�������ȫ�ֱ������ֳ�ͻ���ֲ�����
	//int a = 10;//�ֲ����� - {}�ڲ������

	//age = age + 1;
	//weight = weight + 5;
	//printf("%d", age);
	//printf("%lf", weight);
	//printf("%d", a);

	//���������ĺ�
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}
//%d - ����
//%f - float
//%lf - double