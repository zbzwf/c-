#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>

//��д�����������βΣ������ַ�������
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

//���������ַ�������
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

//����һ����������ÿλһһ��ӡ����
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
//	printf("�����룺");
//	scanf("%d",&sum);
//	print(sum);
//	return 0;
//}