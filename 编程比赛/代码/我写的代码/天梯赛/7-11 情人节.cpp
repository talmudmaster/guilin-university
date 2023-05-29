#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b,c;
	int i;
	cin>>a;
	for(i=0;a[0]!='.';i++){
		if(i==1){
			b+=a;	
		}
		if(i==13){
			c+=a;	
		}
		cin>>a;
	}	
	if(i<=1){
		printf("Momo... No one is for you ...");
	}else if(i<=13){
		cout<<b;
		printf(" is the only one for you...");
	}else{
		cout<<b<<" and "<<c;
		printf(" are inviting you to dinner...");
	}
	return 0;
}
