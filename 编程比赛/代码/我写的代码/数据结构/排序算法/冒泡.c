#include <stdio.h>

int main()
{
	int n,i,j,t,a[10]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
