#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>
#include <string.h>


//�ַ����м��ƶ�
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

//��д��¼���򣬵�¼����ʧ����������������ȷ���¼�ɹ�
//int main()
//{
//	int a = 0;
//	char arr1[9] = { 0 }, arr2[9] = {"abcd1234"};
//	printf("����������");
//	
//	for (a = 0; a < 3; a++)
//	{
//		scanf("%s",arr1);
//		if (!(strcmp(arr1,arr2)))
//		{
//			printf("��¼�ɹ�\n"); break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (a == 3)
//		printf("��\n");
//	return 0;
//}

//����1��10�Ľ׳����
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
//	printf("����һ�����Լ�����׳�");
//	scanf("%d",&n);
//	 for (; n > 0; n--)
//	 {
//		 x = x * n;
//	 }
//	printf("%d",x);
//	return 0;
//}