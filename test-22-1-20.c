#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>


//дһ������ȷ��������һ�ĸ�����
// ���װ�
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
// �򵥰�
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

//�������βΣ�����������Ľ�����
//int main()//������
//{
//	int a = 8, b = 4;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d",a,b);
//	return 0;
//}
//int main()//��ȱ�ݣ���ӳ����������ֵ����������
//{
//	int a = 3, b = 4;
//	a=a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
//һ���㷨
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