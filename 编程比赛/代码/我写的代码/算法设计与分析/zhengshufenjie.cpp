#include <iostream>
using namespace std;

int main()
{
	int i,j,k,m,count=0;
	for(i=2017;i>=1;i--){
		for(j=2017;j>=1&&i+j<2021;j--){
			for(k=2017;k>=1&&i+j+k<2021;k--){
				for(m=2017;m>=1&&i+j+k<2021;m--){
					if(i+j+k+m<2021){
						count++;
					}
				}
			}
		}
	}
	cout<<count;
}
