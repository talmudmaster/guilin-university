#include<iostream>
using namespace std;
int main()
{
	int i,n;
	string a,b;
	getline(cin,a);
	n=a.size();
	if(a[0]>='a'&&a[0]<='z'){
		a[0]-=32;
		cout<<a[0];
	}else if(a[0]>='A'&&a[0]<='Z'){
		cout<<a[0];
	}
	for(i=1;i<n;i++){
		if(a[i-1]==' '){
			if(a[i]>='a'&&a[i]<='z'){
				a[i]-=32;
				cout<<a[i];
			}else if(a[i]>='A'&&a[i]<='Z'){
				cout<<a[i];
			}
			
		}
	}
}
