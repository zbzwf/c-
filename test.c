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

//���ֲ��������е�ĳ����������ӡ���±�
//int main()
//{
//	int a = 0, b = 0, sum = 0, right = 0, left = 0;
//	char arr[] ={1,2,3,4,5,6,7,8,9, '\0'};
//	printf("������Ҫ���ҵ���");
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
//	printf("û�ҵ�");
//	return 0;
//}

//��ӡ99�˷���
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

//�������1/1-1/2+1/3-1/4+1/5��������+1/99-1/100�ĺͣ���ӡ�����
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

//��дһ��������1��100�м���9
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

//��ӡ100��200֮�������
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