#include <REGX52.H>
#include "Delay.h"

int main()
{
	
	//总效果 以500hz的频率响一秒，停一秒
	
	int xms=1000;//响的时间 ：1s  
	//计算方式：频率是500hz，一个周期是2ms， 要有500个周期 ，震动1000次.
	
	while(1)
	{
		while(xms--)
		{
			P2_5=!P2_5; //不同于江科大视频 我的是P2_5不是P1_5.
			Delay(1);//以500hz频率响
		}
		xms=1000;//重新赋值
		Delay(1000);
	}
}