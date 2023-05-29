#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,len,a=0,b=0,c=0,d=0,e=0,f=0;
    string m;
    cin>>m;
    len=m.size();
    for(i=0;i<len;i++){
        if(m[i]=='A'){
            a=1;
        }else if(m[i]=='B'){
            b=1;
        }else if(m[i]=='C'){
            c=1;
        }else if(m[i]=='D'){
            d=1;
        }else if(m[i]=='E'){
            e=1;
        }else if(m[i]=='F'){
            f=1;
            b=f;
        }
    }
    if(a+b>=1&&a+c+d>=2&&c+d+e+f<=3&&b==f&&c==e){
    	cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
