#include <stdio.h>

int main()
{
	int n=0;
	float a;
	char s;
	scanf("%d",&n);	
	while(n--){
		getchar();
		scanf("%c %f",&s,&a);
		if(s=='M'){
			printf("%.2f",a/1.09);
		}else{
			printf("%.2f",a*1.09);
		}/*		
		if(n!=0){
			printf("\n");
		}*/				
	}
	return 0;
}
