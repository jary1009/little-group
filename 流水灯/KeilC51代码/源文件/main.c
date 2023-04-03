#include <REGX52.H>
#include <INTRINS.H>
#include "Delay.h"

void main()
{
	int i=0;
	// 初始化
	P2=~0x01;  //P2_0口为0，1号灯亮 P2-7到P2_0排序
	Delay(500);
	while(1)
	{
		for(i=0;i<8;i++)// 1号到2号灯亮，再到1号灯亮
		{
			P2=_crol_(P2,1); //P2_1口为0，2号灯亮 以此类推
			Delay(500);
		}
		Delay(1000);
		for(i=0;i<8;i++) //1号到8号灯亮，再到1号灯亮
		{
			P2=_cror_(P2,1); //P2_7口为0，7号灯亮 以此类推
			Delay(500);
		}
		Delay(1000);
	}	
}