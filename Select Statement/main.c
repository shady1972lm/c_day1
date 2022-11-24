#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char key = ' ';

	printf("能上哈工大吗（y/n）?");
	scanf("%c", &key);
	if (key == 'y') {
		printf("当然肯定能上！");
	}
	else {
		printf("屁，必须上！！");
	}

	return 0;
}