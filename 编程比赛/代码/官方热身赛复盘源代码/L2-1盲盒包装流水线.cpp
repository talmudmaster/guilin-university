#include <iostream>
#include <map>

using namespace std;

map<int,int> m;
int main(){
	int n,s;
	cin>>n>>s;
	for(int i = 0;i<n;i++){
		int id;
		cin>>id;
		m[id] = (i+1);
	}
	int arr[n+5];
	for(int i = 0;i<(n/s);i++){
		for(int j = 0;j<s;j++){
			int num;
			cin>>num;
			arr[i*s + (s-1-j)] = num;
		}
	}
	int k;
	cin>>k;
	for(int i = 0;i<k;i++){
		int id;
		cin>>id;
		if(m[id] == 0){
			cout<<"Wrong Number"<<endl;
		}else{
			cout<<arr[m[id]-1]<<endl;
		}
	}
	
	return 0;
}
