#include <REGX52.H>
#include "Nixie.h"
#include "Delay.h"
int num=0;
int main()
{
	while(1)
	{
			if(P3_1==0)
			{
			 Delay(20);
			 while(P3_1==0);
			 Delay(20);
				num++;
			}
			if(num==10)num=0;
			Nixie(1,num);
	}
}