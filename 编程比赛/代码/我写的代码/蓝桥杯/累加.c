#include<stdio.h>

//1-n累加

//定义函数（类型，变量）

//迭代
int f(int x){
	int i,sum=0;
	for(i=1;i<=x;i++){
		sum+=i;				
	}
	return sum;
}

//递归

int k(int x){
	if(x==1){
		return 1;
	}
	return x+k(x-1);
}

int main(){
	int n,s1,s2;
	scanf("%d",&n);
	
//	s1=f(n);
//	printf("%d\n",s1);
	s2=k(n);
	printf("%d",s2);
	return 0;
}

//1 2 3  ...  n-2 n-1 n
//n
