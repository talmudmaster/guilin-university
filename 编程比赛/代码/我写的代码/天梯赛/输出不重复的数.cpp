//输出不重复的数 
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,j=0,sum=0,M;
	cin>>n;
	int a[100005];
	for(i=0;i<n;i++){
		cin>>a[i];
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
		if(a[i]!=0){
			if(sum==0){
				cout<<a[i];
			}else{
				cout<<" "<<a[i];
			}	
            sum=1;
		}
	}
	if(sum==0){
		cout<<"None";
	}	
	return 0;
} 
