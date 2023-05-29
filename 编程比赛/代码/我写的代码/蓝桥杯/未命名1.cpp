#include<iostream>

using namespace std;

int main()
{
	int i,a;
	for(i=1;i<10000;i++){
		if(i*i>100000){
			cout<<i<<endl;
			break;
		}
	}
	for(i=1000;i>1;i--){
		if(i*i*i<100000){
			cout<<i;
			break;
		}
	}
	for(i=1;i<10000;i++){
		if(i*i>100000){
			cout<<i;
			break;
		}
	}
	
	
	
	return 0;
}
