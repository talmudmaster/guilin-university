#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void fun(string s, int n){
	if(n == s.size()){
		cout << s << endl; 
		return;
	}
	for(int i = n; i < s.size(); ++i){
		swap(s[i], s[n]);
		fun(s, n+1);
	}
}

int main(){
	char s[10];
	cin >> s; 
	sort(s, s+strlen(s));
	fun(s, 0);
	return 0;
} 
