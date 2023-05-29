#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
	int i,j;
	char s[5][85],t[85];
	for(i=0;i<5;i++)
		cin>>s[i];
	for(i=0;i<4;i++)
		for(j=0;j<4-i;j++)
			if(strcmp(s[j],s[j+1])>0){
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
			}
	cout<<"After sorted:"<<endl;
	for(i=0;i<5;i++)
		cout<<s[i]<<endl;
	return 0;
} 
