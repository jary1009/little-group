#include <INTRINS.H>
//延时子函数
void Delay(unsigned int xms)		//@11.0592MHz  //不是char，bug
{
	while (xms--)
	{
		unsigned char i, j;

		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	}
}

