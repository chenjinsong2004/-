#define _CRT_SECURE_NO_WARNINGS 1//只能放第一行
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<stdbool.h>//布尔类型头文件
#include <stdio.h>
void game()
{
	int a = rand() % 100 + 1;
	int geuss = 0;
	while (1)
	{
		scanf_s("%d", &geuss);
		if (geuss > a)
		{
			printf("太大了");
			continue;
		}
		else if (geuss < a)
		{
			printf("太小了");
			continue;
		}
		else if (geuss == a)
		{
			printf("猜对了");
			break;
		}
	}
}
void menu()
{
	printf("*************\n");
	printf("1.play 0.exit\n");
	printf("*************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	
	int input = 1;
	do
	{
		menu();
		printf("请选择是否开始:");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
		
		return 0;
}
