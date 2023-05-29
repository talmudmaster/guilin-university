#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char a[31],b[105],c[105],d[200];
	int i,j,b1,c1,b2,c2,fb,fc,k,s=0,y=0;
	scanf("%s %s %s",a,b,c);
	b1=c-1;
	c1=strlen(c)-1;
	k=0;
	while(1){
		fb=1;fc=1;b2=0;c2=0;
		for(i=0;i<strlen(a);i++){
			if(fb && b1>=0 && a[i]==b[b1]){
				b2=i;fb=0;b1--;
			}
			if(fc && c1>=0 && a[i]==c[c1]){
				c2=i;fc=0;c1--;
			}
			if((fb==0&&fc==0)||(c1<0&&fb==0)||(b1<0&&fc==0)||(b1<0&&c1<0))
				break;
		}
		s=b2+c2+y;
		if(s>strlen(a)-1){
			d[k++]=a[s-strlen(a)];
			y=1;
		}else{
			d[k++]=a[s];y=0;
		}
		if(b1==-1&&c1==-1&&y!=1)
			break;
	}
	for(i=k-1;i>=0;i--)
		printf("%c",d[i]);
	return 0;
}
