#include<stdio.h>
//位运算 
int main()
{
	int a=10,b=5;
	b^=a;
	a^=b;
	b^=a;
	printf("%d %d",a,b);
}
