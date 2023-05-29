#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void print(int l1,int r1,int l2,int r2)
{
    int k=-1;
    for(int i=l1;i<r1;i++){
        if(s1[i]==s2[r2-1]){
            cout<<s1[i];
            k=i;
            break;
        }
    }
    //cout<<"k "<<k<<endl;
    if(k>l1){
        //cout<<"进入左"<<endl;
        print(l1,k,l2,k-l1+l2);
    }
    if(r1>k+1){
        //cout<<"进入右"<<endl;
        print(k+1,r1,k-l1+l2,r2-1); 
    }
    
 } 
int main()
{ 
    cin>>s1>>s2;
    print(0,s1.length(),0,s2.length());
    return 0;
}
