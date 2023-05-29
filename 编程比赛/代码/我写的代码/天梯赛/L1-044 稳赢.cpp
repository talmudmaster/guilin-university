#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,count=1;
	string a;
	cin>>n;
    n++;
	while(cin>>a){
		if(a=="End"){
			break;
		}else{
            if(count%n==0){
                cout<<a<<endl;
            }else{
                if(a=="Bu"){
                    cout<<"JianDao"<<endl;
                }else if(a=="JianDao"){
                    cout<<"ChuiZi"<<endl;
                }else if(a=="ChuiZi"){
                    cout<<"Bu"<<endl;
                }
            }          
        }		
        count++;
	}
	return 0;
}
