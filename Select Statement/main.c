#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char key = ' ';

	printf("���Ϲ�������y/n��?");
	scanf("%c", &key);
	if (key == 'y') {
		printf("��Ȼ�϶����ϣ�");
	}
	else {
		printf("ƨ�������ϣ���");
	}

	return 0;
}