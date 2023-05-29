#include<stdio.h>
int A[100];
int f(int n){
	if(n<=2){
		A[n]=n;
	}
	if(A[n]>0){
		return A[n];
	}else{
		A[n]=f(n-1)+f(n-2);
		return A[n];
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}
