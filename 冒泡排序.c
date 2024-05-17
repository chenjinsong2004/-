#define _CRT_SECURE_NO_WARNINGS 1//只能放第一行
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<stdbool.h>//布尔类型头文件
#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	//用冒泡排序算法，对数组进行排序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < 9; i++)
	{
		printf("%-2d", arr[i]);
	}
	return 0;
}
