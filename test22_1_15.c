#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<math.h>

//дһ������ÿ�ε���ʹ���һ
//void jiayi(int* ph)
//{
//	*ph = 1 + *ph;
//}
//int main()
//{
//	int sum = 0;
//	jiayi(&sum);
//	jiayi(&sum);
//	printf("%d",sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,23,4,5,6,7,8,9,10 };
//	int* arr2= arr;
//	printf("%d",arr2[1]);
//	return 0;
//}

//дһ��������һ�����������ڲ���ĳ����
//int chazhao( int arr2[], int a, int b)
//{
//	int left = 0, right = b-1, mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a < arr2[mid])
//		{
//			right = mid - 1;
//		}
//		else if (a > arr2[mid])
//			left = mid + 1;
//		else
//			return mid;
//	}
//	if (left > right)
//		return -1;
//}
//int main()
//{
//	int a = 0, sum = 0, zr = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	zr = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ���");
//	scanf("%d",&a);
//	sum=chazhao(arr,a,zr);
//	if (sum == -1)
//		printf("�Ҳ���");
//	else
//		printf("%d",sum);
//	return 0;
//}

//дһ������ȷ��1000-2000������
//int rennian(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0, z = 0, d = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		z=rennian(a);
//		if (z == 1)
//		{
//			printf("%d\n", a);
//			d++;
//		}
//		
//	}
//	printf("%d",d);
//	return 0;
//}

//дһ������ȷ��һ�����ǲ�������
//void sushu(int x)
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x% y == 0)
//		{
//			printf("��������"); break;
//		}
//	}
//	if (y > sqrt(x))
//		printf("������");
//}
//int main()
//{
//	int a = 0;
//	printf("������һ������ȷ���ǲ�������");
//	scanf("%d",&a);
//	sushu(a);
//	return 0;
//}
//
//дһ���������Խ����������α�������
//void exchange(int* ph,int* py)
//{
//	int z =*ph;
//	*ph = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 10, b = 20;
//	exchange(&a, &b);
//	printf("%d,%d",a,b);
//	return 0;
//}

//дһ�������ҳ������ϴ�ֵ
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 70, b = 20;
//	int z = max(a, b);
//	printf("%d",z);
//	return 0;
//}
//int add(int x, int y)//������Ӻ���
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10,b = 20;
//	int sum = add(a,b);
//	printf("%d",sum);
//	return 0;
//}