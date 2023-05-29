#include<iostream>
using namespace std;

int main()
{
	int m,n,i,left,right,mid;
	cin>>m>>n;
	int a[1000],b[1000];
	for(i=0;i<m;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		left=0;
		right=m;
		mid=(left+right)/2;
		cin>>b[i];
		while(b[i]!=a[mid]){		
			if(b[i]>a[mid]){
				left=mid;
				mid=(left+right)/2;
			}else{
				right=mid;
				mid=(left+right)/2;
			}
		}
		cout<<mid;
		if(i!=n-1){
			cout<<" ";
		}
	}
	return 0;
}
