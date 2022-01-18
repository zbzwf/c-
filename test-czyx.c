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
		
	    printf("猜个数");
	    scanf("%d",&ch);
	    
		if (ch < che)
		{
			printf("猜小了\n");
		}
		else if (ch > che)
			printf("猜大了\n");
		else if (ch == che)
		{
			printf("恭喜哦，蒙对了"); 
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
		 printf("玩游戏请按1  退出请按0\n");
		 scanf("%d",&a);
		 switch (a)
		 {
		 case 1:game(); break;
		 case 0:break;
		 default:printf("请重新输入  "); break;
		 }
	 } while (a);
	return 0;
}