#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int pos = 0;
    char res[40];
    while(n!=0){//等价while(n)
        res[pos++] = '0'+n%2;
        n /= 2;
    }
//    等价上面的写法
//    for(i=0;n!=0;i++){
//		res[i]='0'+n%2;
//		n/=2;
//	  }
    for(int i=pos-1;i>=0;i--){
        printf("%c",res[i]);    
    }
    return 0;
}