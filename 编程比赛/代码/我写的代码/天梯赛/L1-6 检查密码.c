#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,N,a=0,b=0,c=0;
    char A[81];
    scanf("%d",&N);
    getchar();
    while(N--){
        gets(A);
        n=strlen(A);
        if(n<6){
        	printf("Your password is tai duan le.\n");
        }else{
            for(i=0;i<n;i++){
                if(A[i]>='0'&&A[i]<='9'){
                    a=1;
                }else if(A[i]>='a'&&A[i]<='z'||A[i]>='A'&&A[i]<='Z'){
                    b=1;
                }else if(A[i]!='.'){
                    c=1;
                }
            }
            if(c==1){
                printf("Your password is tai luan le.\n";
            }else if(b==0&&a!=0){
                printf("Your password needs zi mu.\n");
            }else if(a==0&&b!=0){
                printf("Your password needs shu zi.\n");
            }else if(a!=0&&b!=0){
                printf("Your password is wan mei.\n");
            }
            a=0;b=0;c=0;
        }
    }
    return 0;
}
