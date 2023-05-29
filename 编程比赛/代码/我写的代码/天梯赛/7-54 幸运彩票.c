#include <stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	char a[6];
	int b[6];
	getchar();
	for(i=0;i<n;i++){
		for(j=0;j<6;j++){
			scanf("%c",&a[j]);
			b[j]=a[j]-'0';		
		}
		getchar();
		if(b[0]+b[1]+b[2] == b[3]+b[4]+b[5]){
			printf("You are lucky!");
		}else{
			printf("Wish you good luck.");
		}
		if(i!=n-1){
			printf("\n");			
		}		
	}
	return 0;	
}
