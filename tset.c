#define _CRT_SECURE_NO_WARNINGS 1//只能放第一行
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

int binary_searsh(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	int mid = left + (right - left) / 2;
	while(left<=right)
	{
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了返回下标
	//找不到返回-1
	int ret=binary_searsh(arr,k,sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下表是:%d\n", ret);
	}
	return 0;
}
