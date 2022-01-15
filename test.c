#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int a = 0;
	 srand(rand());
	 a = rand();
	printf("%d",a);
	return 0;
}

//二分查找数组中的某个数，并打印其下标
//int main()
//{
//	int a = 0, b = 0, sum = 0, right = 0, left = 0;
//	char arr[] ={1,2,3,4,5,6,7,8,9, '\0'};
//	printf("请输入要查找的数");
//	scanf("%d", &a);
//	left = strlen(arr) - 1;
//	
//	
//	while(right<=left)
//	{
//		b = (right + left) / 2;
//		if (arr[b] > a)
//		{
//			left = b-1;
//		}
//		else if (arr[b] < a)
//		{
//			right = b+1;
//		}
//		else
//		{
//			printf("%d", b); break;
//		}
//
//	}
//	if(right>left)
//	printf("没找到");
//	return 0;
//}

//打印99乘法表
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	for (a = 1; a <=9; a++)
//	{
//		for (b = 1; b <=a; b++)
//		{
//			printf("%d*%d=%-3d ",b,a, a * b);
//		}
//		printf("\n");
//	}
//}

//计算分数1/1-1/2+1/3-1/4+1/5····+1/99-1/100的和，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 1.0; 
//	double fh = 1.0;
//	for (i = 2,fh=1.0; i <= 100; i++)
//	{
//		fh = (fh) * (-1);
//		sum = sum + (fh / i);
//	}
//	printf("%lf",sum);
//	return 0;
//}

//编写一个代码数1到100有几个9
//int main()
//{
//	int sum = 0, ad = 0;
//	for (sum = 1; sum <= 100; sum++)
//	{
//		if (sum % 10 == 9)
//		{ printf("%d\n",sum);
//		 ad++;
//		}
//		if (sum / 10 == 9)
//		{
//			printf("%d\n", sum);
//			ad++;
//		}
//	}
//	printf("%d\n",ad);
//	return 0;
//}

//打印100到200之间的素数
//int main()
//{
//	int sum = 0, i = 0;
//		for(sum = 101; sum <= 199; sum += 2)
//		{
//			for (i = 2; i <= sqrt(sum); i++)
//			{
//				if (sum % i == 0)
//					break;
//			}
//			if (i > sqrt(sum))
//				printf("%d\n",sum);
//		}
//	return 0;
//}