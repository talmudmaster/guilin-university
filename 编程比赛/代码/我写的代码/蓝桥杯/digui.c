#include<stdio.h>
int k(int x){
	if(x==1){
		return 1;
	}
	return 1+k(x-1);
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=1+k(a);
	printf("%d",b);
	return 0;
}
 