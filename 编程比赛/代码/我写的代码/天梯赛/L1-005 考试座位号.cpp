#include <bits/stdc++.h>

using namespace std;

struct student{
    char a[17];
    int b;
    int c;
}student[1005];

int main()
{
    int n,i,j,m,d[1005];
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>student[i].a>>student[i].b>>student[i].c;
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>d[i];
        for(j=0;j<n;j++){
            if(d[i]==student[j].b){
            	cout<<student[j].a<<" "<<student[j].c<<endl;
                break;
            }
        }
    }
    return 0;
}
