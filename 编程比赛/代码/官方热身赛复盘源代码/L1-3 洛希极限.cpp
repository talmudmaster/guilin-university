#include<bits/stdc++.h>
using namespace std;
int main(){
	double num,flag,r,ans;
	cin>>num>>flag>>r;
	if(flag==0){
		ans = num *2.455; 
	}else{
		ans = num * 1.26;
	}
	if(ans>r){
		printf("%.2f T_T",ans);
	}else{
		printf("%.2f ^_^",ans);
	}
	return 0;
}
