#include <stdio.h>

int main()
{
    int m=0,n;
    scanf("%d:%d",&m,&n);
    if(m>=0&&m<=12){
        printf("Only %02d:%02d.  Too early to Dang.",m,n);
    }else{      
        m-=12;
        if(n>0){
            printf("Dang");
        }
    	while(m--){
       	 printf("Dang");
    	}
    }  
    return 0;
}
