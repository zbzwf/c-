#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>

//编程题第一题
//void reverse(int* arr)
//{
//	int a = 0, b = 0, c = 0;
//	for (a = 0; a < 10; a++)
//	{
//		for (b = a; b < 10; b++)
//		{
//			if (arr[a]<arr[b])
//			{
//				c = arr[a]; arr[a] = arr[b]; arr[b] = c;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	reverse(arr);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}

//编程题第二题
//void jiaohuan(int* arr1, int* arr2)
//{
//	int a = 0, b = 0;
//	for (a = 0; a < 10; a++)
//	{
//		b = arr1[a]; arr1[a] = arr2[a]; arr2[a] = b;
//	}
//}
//int main()
//{
//	int a = 0;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	jiaohuan(arr1,arr2);
//	for (a = 0; a < 10; a++)
//	{
//		printf("arr1[a]=%2d arr2[a]=%2d\n", arr1[a], arr2[a]);
//	}
//	return 0;
//}