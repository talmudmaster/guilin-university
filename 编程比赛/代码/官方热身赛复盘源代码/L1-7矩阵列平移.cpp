#include <iostream>

using namespace std;

int map[105][105];
int main(){
	int n,k,x;
	cin>>n>>k>>x;
	for(int i = 0;i<n;i++){
		int t = 1;
		for(int j = 0;j<n;j++){
			int num;
			cin>>num;
			if((j+1) % 2 == 0){
				if((i+t) < n){
					map[i+t][j] = num;
				}
				t++;
				if(t > k){
					t = 1;
				}
			}else{
				map[i][j] = num;
			}
		}
	}
	
	for(int i = 0;i<n;i++){
		int sum = 0;
		for(int j = 0;j<n;j++){
			if(map[i][j] == 0){
				map[i][j] = x;
			}		
			sum += map[i][j];
		}
		if(i == 0){
			cout<<sum;
		}else{
			cout<<" "<<sum;
		}
	}
	
	return 0;
}
