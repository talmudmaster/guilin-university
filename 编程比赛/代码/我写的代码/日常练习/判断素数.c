#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,prime=1;
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++){
	    if(n%i==0){//等价if(!(n%i))
	        prime = 0;
	        printf("no");
	        break;
		}
	}
	if(prime!=0){//等价if(prime)
		printf("yes");	
	}
    return 0;
}
//100000000
//n 100000000-1 O(n)
//n/2 50000000-1 O(n)
//sqrt(n) 10000-1 O(logn)
