#include<iostream> 
using namespace std;
int main()
{
	long long a,b,max,min,c;
	max = INT_MAX;//2^31-1,int���� 
	min = INT_MIN;//-2^31,int����
	cin >> a >> b;
	c = a + b;
	if(c > max || c < min){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
	return 0;
}

