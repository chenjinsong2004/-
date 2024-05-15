#define _CRT_SECURE_NO_WARNINGS 1//只能放第一行
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<stdbool.h>//布尔类型头文件
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d", &a, &b);
	while(c=a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}
