#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>


//�ַ�������һ���ַ�����˫������������һ���ַ�
int main()
{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//\0���ַ����Ľ�����־
	//char arr[] = "hello";

	char arr1[] = "abc";
	//char arr2[] = {'a', 'b', 'c'};//�����������
	char arr2[] = { 'a', 'b', 'c' , '\0'};

	//int len = strlen("abc");

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//���ֵ

	//��ӡ�ַ���
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	return 0;
}