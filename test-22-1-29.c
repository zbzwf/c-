#include <REGX52.H>
#include <intrins.h>
void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
		while (1)
		{
				P2=0XFE;
				Delay500ms();
				P2=0XFF;
				Delay500ms();
		}
		
}