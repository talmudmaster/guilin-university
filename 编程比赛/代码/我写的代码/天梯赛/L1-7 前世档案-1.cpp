#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
//有点问题 
int main()
{
    int a,b,sum=1,i,j;
    cin>>a>>b;
    char c[31][101];
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            cin>>c[i][j];
            if(c[i][j]=='n')
            	sum+=pow(2,a-j-1);
        }
        cout<<sum;
        sum=1;
        if(i!=b-1)
            cout<<endl;
    }   
} 
