#include<stdio.h>

int main()
{
	long long int n;
	scanf("%lld",&n);
	while(n>0){
		n/=2;
		printf("%lld ",n);// �����ű�ϵͳ��,lldӦʹ��%I64d,��֪���ǲ������ 
	}
	return 0;
}
