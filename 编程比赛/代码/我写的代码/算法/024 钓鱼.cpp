#include <iostream>  
#include<stdio.h>  
#include<stdlib.h>  
using namespace std;  
  
const int N=25;  
int n,h;  
int f[N],d[N],t[N]; //f��һ��5���ӵ����� dÿ��5���ӵ�������� t��i��i+1��Ҫ5���Ӹ���  
int ans;  
int each[N]; //�������ŷ����ǣ���i���ĵ���ʱ��  
int tans,teach[N]; //���ŵ������͸����������ʱ��  
int th,tf[N]; //��Ч����ʱ���ÿ��5���ӵ�����  
  
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
            //��ʼ��ÿ��̰�ĵ������  
            th=h;  
            for(j=0;j<n;j++)  
            {  
                tf[j]=f[j];  
                teach[j]=0;  
            }  
            tans=0;  
  
            //��ÿһ��5����̰��ѡ����������ĺ�����  
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
                if(max==0) //���ĵ�����Ϊ0ʱ��ʣ�����ʱ��ӵ���һ�����ϵĵ���ʱ��  
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
            //�߹��ĺ�����Ϊi+2ʱ��ĵ���ʱ��  
            if(i!=n-1) h-=t[i];  
  
            //�������ŷ������  
            if(tans>ans)  
            {  
                ans=tans;  
                for(j=0;j<n;j++)  
                each[j]=teach[j];  
            }  
        }  
        //������  
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
