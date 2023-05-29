#include<stdio.h>
int pingfangshu(int n);//函数定义
int main()
{
	int i;
	scanf("%d",&i);
	pingfangshu(i);
	return 0;
}
int pingfangshu(int n)//函数声明
{
	if(n<1) {
		return 0;
	}
	printf("%d,",n);
	pingfangshu(n-1);	  
}