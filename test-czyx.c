#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int ch = 0, che = 0;
	che = rand()/100;
	while(1)
	{ 
		
	    printf("�¸���");
	    scanf("%d",&ch);
	    
		if (ch < che)
		{
			printf("��С��\n");
		}
		else if (ch > che)
			printf("�´���\n");
		else if (ch == che)
		{
			printf("��ϲŶ���ɶ���"); 
			break;
		}
    }
}

int main()
{
	int a = 0;
	 srand(time(NULL));
	 do
	 {
		 printf("����Ϸ�밴1  �˳��밴0\n");
		 scanf("%d",&a);
		 switch (a)
		 {
		 case 1:game(); break;
		 case 0:break;
		 default:printf("����������  "); break;
		 }
	 } while (a);
	return 0;
}