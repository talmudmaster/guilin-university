#include<stdio.h>
int main()
{
	int i,j,count=0,sum=2;
	for( i = 3 ; i < 100 ; i += 2 ){
		for( j = 1 ; j <= i ; j ++ ){
			if(i % j == 0)
				count ++;
		}
		if(count == 2){
			sum += i;
		}	
		count = 0;	
	}
	printf("1-100的质数和是：%d\n",sum);
}
