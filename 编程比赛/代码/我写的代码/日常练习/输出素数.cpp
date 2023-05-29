#include<iostream>
#include<algorithm> 
#include<math.h>
using namespace std;
/*
int f(int n){
	for(j=2;j<=sqrt(n);j++){
			if(a[i]%j==0){
				b[i]=0;
				flag=0;
				break;
			}
		}
}*/

int main()
{
	int n,i=0,j=2,flag=1,count=0;
	int a[101],b[i];
	//cin>>n;
	for(i=2;i<10009;i++){
		//cin>>a[i];
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag!=0){
			//b[i]=f()
			cout<<i<<" ";
			count++;
		}
		flag=1;/*
		k=1;*/ 
	}
	cout<<count;
	/*
	for(i=0;i<n;i++){
		cin>>a[i]>>b[i]>>endl;
	return 0;*/
}
