#include <iostream>  
#include<stdio.h>  
#include<stdlib.h>  
using namespace std;  
  
const int N=25;  
int n,h;  
int f[N],d[N],t[N]; //f第一个5分钟钓鱼量 d每个5分钟钓鱼减少量 t从i到i+1需要5分钟个数  
int ans;  
int each[N]; //采用最优方案是，在i胡的钓鱼时间  
int tans,teach[N]; //最优钓鱼量和各个湖钓鱼的时间  
int th,tf[N]; //有效钓鱼时间和每个5分钟钓鱼量  
  
int main()  
{  
    int i,j;  
    while(cin>>n && n>0)  
    {  
        cin>>h;  
        for(i=0;i<n;i++)  
        cin>>f[i];  
        for(i=0;i<n;i++)  
        cin>>d[i];  
        for(i=0;i<n-1;i++)  
        cin>>t[i];  
  
        h*=12;  
        ans=-1;  
        for(i=0;i<n;i++)  
        {  
            //初始化每次贪心的相关量  
            th=h;  
            for(j=0;j<n;j++)  
            {  
                tf[j]=f[j];  
                teach[j]=0;  
            }  
            tans=0;  
  
            //对每一个5分钟贪心选择钓鱼量最大的湖钓鱼  
            while(th>0)  
            {  
                int ind,max;  
                ind=0;max=tf[0];  
                for(j=1;j<=i;j++)  
                {  
                    if(tf[j]>max)  
                    {  
                        max=tf[j];ind=j;  
                    }  
                }  
                if(max==0) //最大的钓鱼量为0时将剩余钓鱼时间加到第一个湖上的钓鱼时间  
                {  
                    teach[0]+=th*5;  
                    break;  
                }  
                else  
                {  
                    teach[ind]+=5;  
                    tans+=tf[ind];  
                    if(tf[ind]>=d[ind])  
                      {  
                          tf[ind]-=d[ind];}  
                    else tf[ind]=0;  
                }  
                th--;  
            }  
            //走过的湖个数为i+2时候的钓鱼时间  
            if(i!=n-1) h-=t[i];  
  
            //更新最优方案结果  
            if(tans>ans)  
            {  
                ans=tans;  
                for(j=0;j<n;j++)  
                each[j]=teach[j];  
            }  
        }  
        //输出结果  
        cout<<each[0];  
        for(i=1;i<n;i++)  
        {  
            cout<<", "<<each[i];  
        }  
        cout<<endl;  
        cout<<"Number of fish expected: "<<ans<<endl;  
        cout<<endl;  
    }  
  
    return 0;  
}  
