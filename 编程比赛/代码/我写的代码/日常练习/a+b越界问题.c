#include<stdio.h> 
int main()
{
	long long a,b,max,min,c; 
	max = 2147483647;//2^31-1,int上限 
	min = -2147483647;//-2^31,int下限
//	但是c中不能表示-2147483648，故用-2147483647表示   || c+1 < min
	scanf("%d %d",&a,&b);
	c = a + b;
	printf("%d %d %d",max,min,c);
	if(c > max){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}

