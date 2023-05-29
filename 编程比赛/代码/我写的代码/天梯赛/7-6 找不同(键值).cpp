#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,j=0,M,k=0;
	cin>>n;
	int a[100005],b[100005]={0};
	for(i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]+=1;
	}
	for(i=0;i<n;i++){
		if(b[a[i]]==1){			
			cout<<a[i];
			break;
		}
	}
	if(i==n){
		cout<<"None";
	}	
	return 0;
} 
