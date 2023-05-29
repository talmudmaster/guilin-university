#include <bits/stdc++.h>
#include <string>
 
using namespace std;

int main()
{
    string a;
    int i=0,j=0,k=0,rear=0,front=0,count=0,len=0;
    getline(cin,a);
    len=a.length();
    for(i=len-1;i>=0;i--){
        if(a[i]!=' '){
            rear=i;
            for(j=i-1;j>=0;j--){
                if(a[j]==' '){
                    break;
                }
            }
            front=j+1;
	        if(count>0){
	            cout<<" ";
	        }
	        for(k=front;k<=rear;k++){
	            cout<<a[k];
	        } 
	        count++;
	        i=j; 
        }
    }
	return 0;
}
