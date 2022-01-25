#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>

//指针的应用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(0);
//	int* p = arr;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d",*p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d",*p);
//		p += 2;
//	}
//	return 0;
//}

//地址相减
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[9]-&arr[0]);
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d\n",**ppa);
//	printf("%d\n", *pa);
//	printf("%d\n",a);
//	return 0;
//}