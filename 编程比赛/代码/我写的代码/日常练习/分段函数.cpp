#include<stdio.h>
int main()
{
	int x;
	double y;
	scanf("%d",&x);
	if(x==0){
		y=0;
	}else{
		y=1.0/2*x;
	}
	printf("%.3f",y);
}
