#include<stdio.h>
int fun(int n)
{
	if(n==1){
		return 1;
	}
	return fun(n-1)+2;	
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
}