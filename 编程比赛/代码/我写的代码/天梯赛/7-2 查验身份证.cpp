#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i,n,sum=0,k=0,b=0;
	string a;
	int h[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};	
	char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	cin>>n;
    getchar();
	while(n--){
		getline(cin,a);
        sum=0;
		k=0;
		for(i=0;i<17;i++){
			if(a[i]>='0'&&a[i]<='9'){
				sum+=(a[i]-'0')*h[i];
			}else{
				k=1;
				break;
			}										
		}
		if(k==1||M[sum%11]!=a[17]){
			cout<<a<<endl;
			b=1;
		}			
	}
	if(b==0){
		cout<<"All passed"<<endl;
	}
	return 0;
}
