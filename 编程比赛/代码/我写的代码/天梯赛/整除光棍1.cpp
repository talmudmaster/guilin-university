#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int i,x=31,a=111;
	for(i=1;i<18;i++){
		cout<<a/n;
		if(a%x==0){
			break;
		}
		a=a%x*10+1;
	}
	cout<<" "<<i+2;
} 
