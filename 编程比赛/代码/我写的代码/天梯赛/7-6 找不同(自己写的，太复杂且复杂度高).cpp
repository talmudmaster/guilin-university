#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,j=0,M,k=0;
	cin>>n;
	int a[100005],b[100005];
	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
    n++;
    a[n-1]=0;
	M=0;
	for(i=0;i<n;i++){
		if(a[M]!=a[i]){
            if(i-M>1)
			for(j=M;j<=i-1;j++){
				a[j]=0;
			}
            M=i;
		}
	}
	n--;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(b[i]==a[j]){
				cout<<b[i];
            	k=1;
            	break;
			}
		}
		if(k==1){
			break;
		}			
	}
	if(k==0){
		cout<<"None";
	}	
	return 0;
} 
