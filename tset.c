#define _CRT_SECURE_NO_WARNINGS 1//只能放第一行
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<stdbool.h>//布尔类型头文件

//斐波那契数列
// 1 1 2 3 5 8 13 21
int fbnq(int n)
{
	if (n <= 2)
		return 1;
	else
		return fbnq(n - 1) + fbnq(n - 2);
} 
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = fbnq(n);
	printf("%d", ret);
	return 0;
}
//递归的实现 ，一定要存在限制条件，如下面中的if

//int fac(int x)//递归
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//}
//int fac(int n)//迭代
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 0; i <= 0; i++)
//	{
//		ret *= i;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}

//int my_strlen(char str[])//参数部分写出数组的形式
//int my_strlen(char*str)//参数部分写出指针的形式
//{
//	int count = 0;//计数，临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//[a b c \0]
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n / 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%u", &num);
//	print(num);
//	return 0;
//}

//函数的声明与定义

//int Add(int x, int y);//声明
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, & b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)//定义
//{
//	return x + y;
//}

//链式访问,一定要有返回类型

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", strlen("abcdef"));
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数的返回值为字符的个数
//
//	return 0;
//}


//指针，地址应用

//void Add(int*p )
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//二分查找

//int binary_searsh(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	int mid = left + (right - left) / 2;
//	while(left<=right)
//	{
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回下标
//	//找不到返回-1
//	int ret=binary_searsh(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下表是:%d\n", ret);
//	}
//	return 0;
//}

//判断闰年

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int a = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d  ", year);
//			a++;
//		}
//	}
//	printf("%d", a);
//}

//交换数值

//void Swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	int c = Add(a, b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}