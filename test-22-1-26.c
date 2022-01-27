#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>


//计算数的二进制数内的1；
//int count(int a)
//{
//	int b = 0, c = 0;
//	for (b = 0; b < 32; b++)
//	{
//		if (a % 2 == 1)
//		{
//			c++; 
//		}a /= 2;
//	}
//	return c;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d",&a);
//	b = count(a);
//	printf("%d\n",b);
//	return 0;
//}

//计算两数二进制不同个数；
//int count(int a, int b)
//{
//	    int c =0;
//		int d = 0, e = 0;
//		c = (a ^ b);
//		for (d = 0; d < 32;d++)
//		{
//			if (c % 2 == 1)
//			{
//				e++; 
//			}c /= 2;
//		}
//		return e;
//}
//int main()
//{
//	int a = 0, b =0, c = 0;
//	scanf("%d %d", &a, &b);
//	c = count(a,b);
//	printf("%d\n",c);
//	return 0;
//}