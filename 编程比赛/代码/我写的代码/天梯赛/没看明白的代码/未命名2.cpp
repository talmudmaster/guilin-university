#include<bits/stdc++.h>

using namespace std;

int main(){
	string a;
	vector<string>vec;
	getline(cin,a);
	stringstream p;
	p<<a;
	string s;
	while(p>>s){
		vec.push_back(s);
	}
	reverse(vec.begin(),vec.end());
	for(vector<string>::iterator x = vec.begin();x!=vec.end();x++){
		cout<<*x;
		if(x!=vec.end()-1)cout<<" ";
	}
	return 0;
} 
