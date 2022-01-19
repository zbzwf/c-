#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<string.h>

//void maopao(int* arr)
//{
//	int a = 0, b = 0, c = 0,d=0;
//	for (a = 0; a <= 9; a++)
//	{
//		for (b = 0; b < 9-a; b++)
//		{
//			d = 0;
//			if (arr[b] > arr[(b + 1)])
//			{
//				c = arr[b]; arr[b] = arr[(b + 1)]; arr[(b + 1)] = c;d++;
//			}
//		}
//		if (d == 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int arr[] = { 9,8,7,4,5,6,3,2,1,0 };
//	maopao(arr);
//	for (a = 0; a <= 9; a++)
//	{
//		printf("%d\n",arr[a]);
//	}
//	return 0;
//}