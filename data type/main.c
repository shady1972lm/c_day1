#include <stdio.h>

int main()
{
	//�ַ�����
	char ch = 'a';
	//����
	int age = 20;
	//������
	short num = 10;
	//long
	//long long
	//�����ȸ�����
	float weight = 55.5;
	//˫���ȸ�����
	double d = 0.0;

	printf("%d", 100);//��ӡ����
	//sizeof - �ؼ��� - ������ - ��������ͻ��߱�����ռ�ռ�Ĵ�С
	printf("%d", sizeof(char));
	printf("%d", sizeof(short));
	printf("%d", sizeof(int));
	printf("%d", sizeof(long));
	printf("%d", sizeof(long long));
	printf("%d", sizeof(float));
	printf("%d", sizeof(double));

	return 0;
}