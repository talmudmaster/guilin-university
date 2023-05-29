#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	scanf("%d",&a);
//	sqrt
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0){
			printf("No");
			break;
		}
		
	}

	if(i==a-2){
		printf("YES");
	}
	
}
//49 n
//2-48 47 n-2 n 
//2-24 23 n/2 n
//
//
//48/2=24
//48/24=2
//48/6=8
//48/8=6
//8*6=48
//7*7=49
//2-sqrt(49) sqrt(49)-1 根号n
//a[10000]
