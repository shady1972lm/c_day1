#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//#define MAX 10000
////����
////1.���泣��
//int main()
//{
//	//���泣��
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	//2.const���εĳ�����
//	const int num = 10;//num���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
//	//num = 20;//����
//	printf("%d\n", num);
//
//	int arr[10] = { 0 };
//
//	const int n = 10;
//
//	//int arr2[n] = { 0 };//n�Ǳ���
//
//	//3.#define����ı�ʶ������
//	//MAX = 2000;//����
//	int n2 = MAX;
//	printf("n2 = %d\n", n2);
//
//	return 0;
//}

enum Sex
{
	//����ö�����͵ı�����δ������ȡֵ
	//ö�ٳ���
	MALE = 3,//����ֵ
	FEMALE,
	SECRET
};

int main()
{
	//4.ö�ٳ���
    //����һһ�оٵĳ���

	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}