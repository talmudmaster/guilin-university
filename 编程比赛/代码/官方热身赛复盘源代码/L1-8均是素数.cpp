#include<iostream>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
//>1的自然数，只能被1和自身整除 
map<int,int> mp;
int f(int x){
	if(x<2){
		return 0;
	}
	if(mp[x]==1){
		return 1;
	}
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	mp[x]=1;
	return 1;
}
int main(){
	int m,n,ans=0;
	cin>>m>>n;
	vector<int> a,pv,qv,rv;
	for(int i=m;i<=n;i++){
		if(f(i)){
			a.push_back(i);
		}
	}
	for(int i=0;i<a.size();i++){
		for(int j=i+1;j<a.size();j++){
			for(int k=j+1;k<a.size();k++){
				int p=a[i],q=a[j],r=a[k];
				if( f(p*q+r)&&f(q*r+p)&&f(r*p+q) ){
					pv.push_back(p);
					qv.push_back(q);
					rv.push_back(r);
					ans++;
				}
			}
		}
	}
	/*
	cout<<"{"<<pv[0];
	for(int i=1;i<pv.size();i++){
		cout<<","<<pv[i];
	}
	cout<<"},";
	
	cout<<"{"<<qv[0];
	for(int i=1;i<qv.size();i++){
		cout<<","<<qv[i];
	}
	cout<<"},";
	
	cout<<"{"<<rv[0];
	for(int i=1;i<rv.size();i++){
		cout<<","<<rv[i];
	}
	cout<<"}";
	*/
	cout<<ans;
	return 0;
}
