#include <iostream>
#include <algorithm>
using namespace std;

int T[1100],Q[1100];
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    int sum;
    int TFast,QFast,TLow,QLow;
    while(scanf("%d",&n) && n){
        for(int i=0;i<n;++i)    scanf("%d",&T[i]);
        for(int i=0;i<n;++i)    scanf("%d",&Q[i]);
        sort(T,T+n,cmp);
        sort(Q,Q+n,cmp);
        sum = 0;
        TFast = QFast = 0;
        TLow = QLow = n-1;
        while(n--){
            if(T[TFast] > Q[QFast]){
                TFast++;
                QFast++;
                sum++;
            }
            else if(T[TLow] > Q[QLow]){
                TLow--;
                QLow--;
                sum++;
            }
            else if(T[TLow] < Q[QFast]){
                TLow--;
                QFast++;
                sum--;
            }
        }
        printf("%d\n",sum*200);
    }
    return 0;
}
