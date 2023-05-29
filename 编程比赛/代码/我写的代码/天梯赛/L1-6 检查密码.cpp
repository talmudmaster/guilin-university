#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,N,a=0,b=0,c=0;
    string A;
    cin>>N;
    getchar();
    while(N--){
        getline(cin,A);
        n=A.size();
        if(n<6){
            cout<<"Your password is tai duan le."<<endl;
        }else{
            for(i=0;i<n;i++){
                if(A[i]>='0'&&A[i]<='9'){
                    a=1;
                }else if(A[i]>='a'&&A[i]<='z'||A[i]>='A'&&A[i]<='Z'){
                    b=1;
                }else if(A[i]!='.'){
                    c=1;
                }
            }
            if(c==1){
                cout<<"Your password is tai luan le."<<endl;
            }else if(b==0){
                cout<<"Your password needs zi mu."<<endl;
            }else if(a==0){
                cout<<"Your password needs shu zi."<<endl;
            }else{
                cout<<"Your password is wan mei."<<endl;
            }
            a=0;b=0;c=0;
        }
    }
    return 0;
}
