#define _CRT_SECURE_NO_WARNINGS 1//ֻ�ܷŵ�һ��
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<stdbool.h>//��������ͷ�ļ�

//쳲���������
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
//�ݹ��ʵ�� ��һ��Ҫ���������������������е�if

//int fac(int x)//�ݹ�
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//}
//int fac(int n)//����
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

//int my_strlen(char str[])//��������д���������ʽ
//int my_strlen(char*str)//��������д��ָ�����ʽ
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
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

//�����������붨��

//int Add(int x, int y);//����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, & b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)//����
//{
//	return x + y;
//}

//��ʽ����,һ��Ҫ�з�������

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", strlen("abcdef"));
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf�����ķ���ֵΪ�ַ��ĸ���
//
//	return 0;
//}


//ָ�룬��ַӦ��

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

//���ֲ���

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
//	//�ҵ��˷����±�
//	//�Ҳ�������-1
//	int ret=binary_searsh(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}

//�ж�����

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

//������ֵ

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
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}