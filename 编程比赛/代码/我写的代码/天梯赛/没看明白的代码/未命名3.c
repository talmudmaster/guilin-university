#include<stdio.h>
#include<string.h>
 
int main()
{
    char a[500001];
    int i=0,j=0,k=0,rear=0,front=0,count=0,len=0;
    gets(a);
    len=strlen(a);
    for(i=len-1;i>=0;i--){
        if(a[i]!=' '){
            rear=i;
            for(j=i-1;j>=0;j--){
                if(a[j]==' '){
                    break;
                }
            }
            front=j+1;
	        if(count>0){
	            printf(" ");
	        }
	        for(k=front;k<=rear;k++){
	            printf("%c",a[k]);
	        } 
	        count++;
	        i=j; 
        }
    }
	return 0;
}
