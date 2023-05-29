#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int a,b,sum=1,i,j;
    cin>>a>>b;
    char c[31][101];
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            cin>>c[i][j];
            if(c[i][j]=='y')
            	sum*=2;
            else
				sum=sum*2+1;
        }
        cout<<sum-pow(2,a)+1;
        sum=1;
        if(i!=b-1)
            cout<<endl;
    }   
} 
