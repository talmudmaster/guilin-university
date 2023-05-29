#include<bits/stdc++.h>
using namespace std;
vector<int> vec[100010];
int cou[110];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int num,x;
		cin>>num;
		for(int j=0;j<num;j++){
			cin>>x;
			vec[i].push_back(x);	
		}
	}
	
	int res=1,op,x;
	for(int i=0;i<m;i++){
		cin>>op>>x;
		if(op==0){
			res = vec[res-1][x-1];
		}else if(op == 1){
			cout<<res<<endl;
			cou[x] = res;
		}else{
			res = cou[x];
		}
	}
	cout<<res;
	return 0;
}
