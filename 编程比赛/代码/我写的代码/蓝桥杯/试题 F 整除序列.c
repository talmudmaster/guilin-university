#include<stdio.h>

int main()
{
	long long int n;
	scanf("%lld",&n);
	while(n>0){
		n/=2;
		printf("%lld ",n);// 在蓝桥杯系统中,lld应使用%I64d,不知道是不是真的 
	}
	return 0;
}
