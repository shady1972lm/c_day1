#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//数组 - 一组相同类型的元素的集合

	//10个整型1-10存起来
	//数组是用下标访问
	  
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a', 'b', 'c' };//不完全初始化，剩余默认为0
	int i = 0;

	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}