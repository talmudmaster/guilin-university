#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	int a[n][n],b[n][n],c[n][n];
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			cin>>a[i][j];
	
	getchar();
	
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			cin>>b[i][j];

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			c[i][j] = a[i][j] * b[i][j];
			cout<<c[i][j]<<" ";
		}
		if(i != n-1)
			cout<<endl;		
	}
//	时间复杂度是O(N^2)
}

//3
//1 5 9
//7 6 4
//5 9 4
//
//2 5 8
//6 9 7
//6 4 8
