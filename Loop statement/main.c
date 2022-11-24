#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int line = 0;
	while (line <= 100) {
		printf("距离被哈工大录取还有%d\n", line);
		line++;
	}
	if (line >= 100) {
		printf("恭喜您已经被哈尔滨工业大学录取！！");
	}
	return 0;
}