#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>

//编写函数不加入形参，计算字符串长度
//int mystrlen(char* ph)
//{
//	if (*ph != '\0')
//		return 1 + mystrlen(ph + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "birt";
//	int a=0;
//	a = mystrlen(arr);
//	printf("%d",a);
//	return 0;
//}

//函数计算字符串长度
//int my_strlen(char* ph)
//{
//	
//	int b = 0;
//	while ((* ph ) != '\0')
//	{
//		 ph++; b++;
//	}
//	return b;
//}
//int main()
//{
//	char arr[] = "bit";
//	int a = my_strlen(arr);
//	printf("%d",a);
//	return 0;
//}

//输入一个数将他的每位一一打印出来
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x/10);
//	}
//	printf("%d ",x%10);
//}
//int main()
//{
//	unsigned int sum = 0;
//	printf("请输入：");
//	scanf("%d",&sum);
//	print(sum);
//	return 0;
//}