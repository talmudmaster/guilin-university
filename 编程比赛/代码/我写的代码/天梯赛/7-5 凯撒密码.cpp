#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int n,len,i;
    getline(cin,a);
    cin>>n;
    n%=26;
    len=a.size();
    for(i=0;i<len;i++){
    	if(a[i]>='a'&&a[i]<='z'){
		  	if(n>=0) 
				a[i] = ((a[i]-'a') + n)%26+'a';
			else if(n<0) 
				a[i] = ((a[i]-'a') + n+26)%26+'a';
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			if(n>=0) 
				a[i] = ((a[i]-'A') + n)%26+'A';
			else if(n<0) 
				a[i] = ((a[i]-'A') + n+26)%26+'A';
		}	
	}
    a[i]='\0';
    cout<<a;
    return 0;
}
