#define _CRT_SECURE_NO_WARNINGS 1	
#include"game.h"
#include<string.h>
#include<stdio.h>

//������
void game()
{
	char a = 0;
	char arr[hang][lie] = { 0 };
	chushihua(arr, hang, lie);
	dayinqipan(arr, hang, lie);
	while (1)
	{
        wanjia(arr,hang,lie);
		dayinqipan(arr, hang, lie);
		a = win(arr, hang, lie);
		if (a != '$')
			break;
		diannao(arr,hang,lie);
		dayinqipan(arr, hang, lie);
		a = win(arr, hang, lie);
		if (a != '$')
			break;
	}
	if (a == '*')
		printf("���Ӯ");
	else if (a == '#')
		printf("����Ӯ");
	else
		printf("ƽ��");
}
void test()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("  1.play    2.exit\n");
		scanf("%d",&a);
		switch (a)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:game();
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (a);
	return 0;
}
int main()
{
	test();
	return 0;
}