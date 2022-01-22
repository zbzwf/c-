#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>


//写一个代码确定整形中一的个数；
// 进阶版
//int main()
//{
//	int a = -1, b = 0, c = 0;
//	for (b = 0; b < 32; b++)
//	{
//		if (1 == (a >> b & 1))
//			c++;
//	}
//	printf("%d", c);
//	return 0;
//}
// 简单版
//int main()
//{ 
//	int a = 7, b = 0, c = 0;
//	while(a)
//	{ 
//		if ((a % 2 )== 1)
//			c++;
//		a = a/2;
//	}
//	printf("%d",c);
//	return 0;
//}

//不创建形参，完成两个数的交换；
//int main()//进化版
//{
//	int a = 8, b = 4;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d",a,b);
//	return 0;
//}
//int main()//有缺陷，相加超过整形最大值会出错；溢出。
//{
//	int a = 3, b = 4;
//	a=a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//一般算法
//int main()
//{
//	int a = 4;
//	int b = 7;
//	int s = 0;
//	s = a;
//	a = b;
//	b = s;
//	printf("a=%d,b=%d\n",a,b);
//} 