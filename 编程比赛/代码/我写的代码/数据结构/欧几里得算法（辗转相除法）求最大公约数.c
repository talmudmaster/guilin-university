#include<stdio.h>

long Eucli(long a,long b,long n) 
{
	if(b==0)
	    return a; 
    n=n+1;
    return Eucli(b,a%b,n); 
}
  
int main() 
{
	long a,b,n=0,d,t=0;
	printf("enter the first number:\n");
	scanf("%ld",&a);
	printf("enter the second number:\n");
	scanf("%ld",&b);
	if(a<b)
    {t=a;a=b;b=t;}
    d=Eucli(a,b,n);
    printf("gcd=%ld\n",d);
    printf("µü´ú´ÎÊý£º%ld\n",n);
    return 0;  
} 
