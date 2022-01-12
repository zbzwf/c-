#include <stdio.h>
//int mun = 20;//全局变量
int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("%d\n",sizeof(int));
	char ch = 'a';//局部变量
	printf("%c\n",ch);
	printf("%d,%d", num1, num2);
	return 0;
}  