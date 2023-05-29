#include<stdio.h>
int fun(int n)
{	int sum;
	if(n==1){
		return n;
	}	
	sum=fun(n-1)+fun(n-1);
	return sum;

}
int main()
{
	int n;
	scanf("%d",&n);  //输出你要打印的斐波那契数列的项数
	printf("%d",fun(n));
}