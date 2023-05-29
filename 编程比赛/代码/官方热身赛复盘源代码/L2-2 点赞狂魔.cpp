#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
struct people{
	string name;
	int cnt;
	int k;
};

bool px(people x,people y){
	if(x.cnt==y.cnt){
		return x.k<y.k;
	}
	return x.cnt>y.cnt;
}

int main(){
	int n;
	cin>>n;
	vector<people> a;
	
	for(int i=0;i<n;i++){
		people p1;
		cin>>p1.name>>p1.k;
		p1.cnt=0;
		map<int,int> mp;
		//int mp[10000050]={0};
		for(int j=0;j<p1.k;j++){
			int id;
			cin>>id;
			if(mp[id]==0){
				mp[id]=1;
				p1.cnt++;
			}
		}
		
		a.push_back(p1);
	}
	
	sort(a.begin(),a.end(),px);
	cout<<a[0].name;
	
	for(int i=1;i<3;i++){
		if(i>=n){
			cout<<" -";
		}else{
			cout<<" "<<a[i].name;
		}
	}
	return 0;
}
