#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0,c;
    cin>>n;
    while(n--){
        cin>>c;
        if(c%2){
            a++;
        }else{
            b++;
        }
        //cout<<c<<endl;
    }
    cout<<a<<" "<<b;
    return 0;
}
