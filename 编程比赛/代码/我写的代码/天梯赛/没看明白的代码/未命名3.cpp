#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){
	char text[31],a[105],b[105],print[200];
	int i,j=0,sum=0,y=0,A,B,fa,fb,len,len1,len2;
	cin>>text>>a>>b;
	len=strlen(text);
	len1=strlen(a)-1;
	len2=strlen(b)-1;
	while(1){
		fa=1;fb=1;A=0;B=0;//A,B代表某一位（a,b同一位）的数值 
		for(i=0;i<len;i++){
			if(fa!=0 && len1>=0 && text[i]==a[len1]){
				A=i;fa=0;len1--;
			}
			if(fb!=0 && len2>=0 && text[i]==b[len2]){
				B=i;fb=0;len2--;
			}
			if((fa==0&&fb==0)||(len2<0&&fa==0)||(len1<0&&fb==0)||(len1<0&&len2<0))
				break;
		}
		sum=A+B+y;
		//进位,如果进一位，y=1，否则，y=0代表不进位 
		if(sum>len-1){
			print[j++]=text[sum-len];
			y=1;
		}else{//不进位 
			print[j++]=text[sum];
			y=0;
		}
		if(len1==-1&&len2==-1&&y!=1)//遍历完成 
			break;
	}
	for(i=j-1;i>=0;i--)//倒序输出 
		cout<<print[i];
	return 0;
}
