#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int line = 0;
	while (line <= 100) {
		printf("���뱻������¼ȡ����%d\n", line);
		line++;
	}
	if (line >= 100) {
		printf("��ϲ���Ѿ�����������ҵ��ѧ¼ȡ����");
	}
	return 0;
}