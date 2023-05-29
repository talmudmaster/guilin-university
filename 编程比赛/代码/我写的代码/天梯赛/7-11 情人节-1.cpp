#include<iostream>
using namespace std;
int main()
{
    int key=0;
    string a,b,t;
    cin>>t;
    while(t[0]!='.'){
        key++;
        if(key==2){
            a+=t;
        }
        if(key==14){
            b+=t;
        }
        cin>>t;
    }
    if(key<2){
        cout<<"Momo... No one is for you ...";
    }else{
        if(key<14){
            cout<<a<<" is the only one for you...";
        }else{
            cout<<a<<" and "<<b<<" are inviting you to dinner...";
        }
    }
    return 0;
}
