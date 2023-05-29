#include<iostream>

using namespace std;

int main()
{
	int i,j,k,m,a,b,c,d,count=0;
	for(a=1;a<=9;a++){
		for(b=1;b<=9;b++){
			if(a==b){
				continue;
			}
			for(c=1;c<=9;c++){	
				for(d=1;d<=9;d++){
					if(c==d){
						continue;
					}
					if(a*c*(b*10+d)==b*d*(a*10+c)){
						cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;	
						count++;
					}		
				}
			}
		}
	}
	cout<<count;
	return 0;
}
