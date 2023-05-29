#include<bits/stdc++.h>
using namespace std;
const int N=20;
int n,k;
int vis[N][N];
int mapp[N][N];
int b[N];
char c;
int cnt=0;
int flag=0;
void searchh(int x,int y){
    if(y==k)
        cnt++;
    else{
        for(int i=x;i<n;i++){
            for(int j=0;j<n;j++){
                if(mapp[i][j]&&(!b[j])){
                    b[j]=1;
                    searchh(i+1,y+1);
                    b[j]=0;
                }
            }
        }
    }
}
int main()
{
    while(cin>>n>>k){
        if(n==-1&&k==-1)
        break;
        memset(vis,0,sizeof(vis));
        memset(mapp,0,sizeof(mapp));
        memset(b,0,sizeof(b));
        cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>c;
                if(c=='#') mapp[i][j]=1;
                else mapp[i][j]=0;
            }
        }
        searchh(0,0);
        cout<<cnt<<endl;
    }
    return 0;
}
