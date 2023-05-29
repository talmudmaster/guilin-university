#include <iostream>
#include<fstream>
#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))
#define MAXN 20
using namespace std;
#define N 10001
//问题表示
int n;
int a[N];
//求解结果表示
int dp[MAXN];
void maxSubSum()                //求dp数组
{
    dp[0]=0;
    for (int j=1;j<=n;j++)
        dp[j]=max(dp[j-1]+a[j],a[j]);
}
void dispmaxSum()                    //输出结果
{
    int maxj=1;
    for (int j=2;j<=n;j++)        
        if (dp[j]>dp[maxj]) maxj=j;
    int k;    
    for (k=maxj;k>=1;k--)        
        if(dp[k]<=0) break;
    printf("%d\n",dp[maxj]);
    printf("%d %d",k+1,maxj);
}
int main()
{
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];    
    maxSubSum();
    dispmaxSum();
    return 0;
}
