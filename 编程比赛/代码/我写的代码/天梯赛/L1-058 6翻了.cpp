#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,n,count=0;
	string a,b;
	getline(cin,a);
	n=a.size();
	for(i=0;i<n;i++){
		if(a[i]=='6'&&i!=n-1){
			count++;
		}else{
			if(a[i]=='6'){
				count++; 
			}
			if(count<=3){
				while(count--){
					b+='6';
				}
			}else if(count<=9){
				b+='9';
			}else{
				b+='2';
				b+='7';	
			}
			if(a[i]!='6'){
				b+=a[i];
			}
			count=0;
		}
	}
	cout<<b;
}
 
