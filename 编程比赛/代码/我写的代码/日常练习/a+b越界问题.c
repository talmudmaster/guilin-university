#include<stdio.h> 
int main()
{
	long long a,b,max,min,c; 
	max = 2147483647;//2^31-1,int���� 
	min = -2147483647;//-2^31,int����
//	����c�в��ܱ�ʾ-2147483648������-2147483647��ʾ   || c+1 < min
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

