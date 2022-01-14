#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>
#include <string.h>


//字符向中间移动
//int main()
//{
//	int a = 0, left = 0, right= 15;
//	char arr1[] = "welcome bite!!!!";
//	char arr2[] = "################";
//	for (a = 0; a <= 16; a += 2,left++,right--)
//	{
//		printf("%s\n",arr2);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//	}
//	return 0;
//}

//编写登录程序，登录三次失败则跳出，密码正确则登录成功
//int main()
//{
//	int a = 0;
//	char arr1[9] = { 0 }, arr2[9] = {"abcd1234"};
//	printf("请输入密码");
//	
//	for (a = 0; a < 3; a++)
//	{
//		scanf("%s",arr1);
//		if (!(strcmp(arr1,arr2)))
//		{
//			printf("登录成功\n"); break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (a == 3)
//		printf("滚\n");
//	return 0;
//}

//计算1—10的阶乘相加
//int main()
//{
//	int a = 0, i = 0, m = 1;
//	 for (i = 1; i < 11; i++)
//	 {
//		 m = m * i;
//		 a = m + a;
//		 printf("%d\n",m);
//	 }
//	 printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int x =1;
//	int n = 0;
//	printf("输入一个数以计算其阶乘");
//	scanf("%d",&n);
//	 for (; n > 0; n--)
//	 {
//		 x = x * n;
//	 }
//	printf("%d",x);
//	return 0;
//}