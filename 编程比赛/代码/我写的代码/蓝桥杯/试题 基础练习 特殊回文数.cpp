#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
//	using std::cout;
	int i,j;
	int n;
	cin>>n;
	int a[100];
	for(i=1;i<=9;i++)	//五位十进制数，第五位不为0 
		for(j=0;j<=9;j++)
			if(((i+j)*2<=n) && ((i+j)*2>=n-9))
				cout<<i<<j<<(n-i-i-j-j)<<j<<i<<endl;
	
	int f,g,h;
	for(f=1;f<=9;f++)	//既然是六位十进制数，则第六位不为0 
		for(h=0;h<=9;h++)
			for(g=0;g<=9;g++)
				if((f+f+h+h+g+g)==n)
					cout<<f<<h<<g<<g<<h<<f<<endl;
	
	return 0;
}
