#include<stdio.h>

int main()
{
	int min=0,sec=0,power=10000;
	while(1){
		power-=600;
		min++;
		if(power<300){
			power+=300;
			min++;
			break;
		}
		power+=300;
		min++;
	}
	sec=power/(600/60)+min*60;
	printf("%d",sec);
	return 0;	
}
