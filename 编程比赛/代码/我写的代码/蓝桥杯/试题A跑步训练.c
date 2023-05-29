#include<stdio.h>

int main()
{
	int target=10000,time;
	int count=0;
	int flag=1;
	while(1){
		if(target<600&&flag){
			break;
		}
		if(flag){
			target -= 600;
			flag = 0;
		}else{
			target += 300;
			flag = 1;
		}
		count++;
	}
	time = count*60+target/10;
	printf("%d",time);
	return 0;	
} 
