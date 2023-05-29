#include<iostream>
using namespace std;
int main()
{
    int m[3][3];
    int i,j,t=3,n,k,l,sum=0,s=0;
    for(i=1;i<=3;i++){
    	for(j=1;j<=3;j++){
    		cin>>m[i][j];
    		s+=m[i][j];
		}
	}
	for(i=1;i<=3;i++){
    	for(j=1;j<=3;j++){
    		if(m[i][j]==0){
    			m[i][j]=45-s;
			}
		}
	}
			
	while(t--){
		cin>>k>>l;
		cout<<m[k][l]<<endl;
	}
	cin>>n;
	if(n<4){
		for(j=1;j<=3;j++){
    		sum+=m[n][j];
		}
	}else if(n<7){
		for(j=1;j<=3;j++){
    		sum+=m[j][n-3];
		}
	}else if(n==7){
		for(j=1;j<=3;j++){
    		sum+=m[j][j];
		}
	}else{
		for(j=1;j<=3;j++){
    		sum+=m[j][4-j];
		}
	}
    int a[20]={10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
    cout<<a[sum-6];
    
}
