#include<iostream>
using namespace std;
int main()
{
	long long int i,x=31,a=111;
	for(i=1;i<18;i++){
		cout<<a<<" "<<a/x<<" "<<a%x<<endl;
		//a=a%x*10+1;
		a=a*10+1;
	}
} 
