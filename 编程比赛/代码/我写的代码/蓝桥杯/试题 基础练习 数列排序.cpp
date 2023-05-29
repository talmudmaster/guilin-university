#include<iostream>
#include<algorithm>
using namespace std;

int swap(int a,int b){
	a++;
}

int main()
{
	swap(x,y);
	int n,i,a[205];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+i);
	cout<<a[0];
	for(i=1;i<n;i++){
		cout<<" "<<a[i];
	}
	
}