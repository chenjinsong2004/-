#define _CRT_SECURE_NO_WARNINGS 1//只能放第一行
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

void print(char x, char y)
{
	printf("%c->%c\n", x, y);
}
void move(int n, char one, char two, char three)
{
	if (n == 1)
		print(one, three);
	else
	{
		move(n - 1, one, three, two);
		print(one, three);
		move(n - 1, two, one, three);
	}
}
int main()
{
	int n = 0;
	printf("输入盘子数量：");
	scanf("%d", &n);
	printf("移动步骤为：\n");
	move(n, 'a', 'b','c');
	return 0;
}