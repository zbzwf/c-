#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int pin(char arr[hang][lie], int h, int l)
{
	int a = 0, b = 0;
	for (a = 0; a < h; a++)
	{
		for (b = 0; b < l; b++)
		{
			if (arr[a][b] == ' ')
				return 0;
		}
	}
	return 1;
}

void chushihua(char arr[hang][lie],int H,int L)
{
	{
		int a = 0, b = 0;
		for (a = 0; a < H; a++)
		{
			for (b = 0; b < L; b++)
			{
				arr[a][b] = ' ';
			}
		}
	}
}
void dayinqipan(char arr[hang][lie], int H, int L)
{
	int a = 0, b = 0, c = 0;
	for (a = 0; a <H; a++)
	{
		for (b = 0; b < L; b++)
		{
			printf(" %c ",arr[a][b]);
			if (b < L - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (a <H- 1)
		{
			for (c = 0; c < L; c++)
			{
				printf("---");
				if(c<L-1)
				printf("|");
			}
			printf("\n");

		}
	}
}
void wanjia(char arr[hang][lie], int H, int L)
{
	int a = 0, b = 0;
	while (1)
	{
		printf("玩家走\n");
		printf("请输入坐标,用空格分隔");
		scanf("%d %d",&a,&b);
		if ((a >= 1 && a <= H) && (b >= 1 && b <= L))
		{
			if (arr[a - 1][b - 1] == ' ')
			{
				arr[a-1][b-1] = '*';break;
			}
			else
			{
				printf("已占用,请重新输入");
			}
		}
		else
			printf("坐标输入错误，请重新输入");
	}

}
void diannao(char arr[hang][lie], int h, int l)
{
	int x = 0, y = 0;
	printf("电脑走\n");
	while (1)
	{
		x= rand() %3;
		y = rand() %3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#'; break;
		}

	}
	
}
char win(char arr[hang][lie], int h, int l)
{
	int a = 0;
	for (a = 0; a < h; a++)
	{
		if (arr[a][0] == arr[a][1] && arr[a][1] == arr[a][2] && arr[a][2] != ' ')
			return arr[a][0];
	}
	for (a = 0; a < l; a++)
	{
		if (arr[0][a] == arr[1][a] && arr[1][a] == arr[2][a] && arr[2][a] != ' ')
			return arr[2][a];
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
		return arr[0][0];
	if (arr[1][3] == arr[1][1] && arr[1][1] == arr[3][1])
		return arr[0][0];
	if (1 == pin(arr, hang, lie))
	{
		return '^';
	}
	return '$';
}