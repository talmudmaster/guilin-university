#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 30;

void sw(char a[], int i, int size=MAX){
	if(i==0)
		a[i+1] ^= 1;
	else if(i==size-1)
		a[i-1] ^= 1;
	else{
		a[i+1] ^= 1;
		a[i-1] ^= 1;
	}
	a[i] ^= 1;
}

int main(){
	char ori[MAX]; 
	char v[MAX]; 
	char result[MAX];
	int switchs[MAX]; 
	cin >> ori >> result;
	int n = strlen(ori);
	for(int k=0; k<2; ++k){
		for(int i=0; i<n; ++i){
			v[i] = ori[i];
			switchs[i] = 0;
		}	
		if(k==0){
			for(int i=0; i<n-1; ++i){
				if(v[i]!=result[i]){
					sw(v, i+1);
					switchs[i+1] = 1;
				}	
			}
			if(v[n-1]==result[n-1])break;
		}
		else{
			sw(v, 0);
			switchs[0] = 1;
			for(int i=0; i<n-1; ++i){
				if(v[i]!=result[i]){
					sw(v, i+1);
					switchs[i+1] = 1;
				}
			}
		}
	}
	if(v[n-1]==result[n-1]){
		int sum=0;
		for(int i=0; i<n; ++i){
			sum += switchs[i];
		}
		cout << sum;
	}
	else
		cout << "impossible" << endl;
	return 0;
} 

