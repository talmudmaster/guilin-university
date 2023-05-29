#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
const int MAXN=1e4;
const double pi=acos(-1);
const double EPS=1e-6;
int N,F;
double VofPi[MAXN];
bool isEqual(double a,double b)
{
    return abs(a-b)<=EPS;
}
int feasible(double d)
{
    int num=0;
    for(int i=0;i<N;i++){
        double t=VofPi[i]/d;
        num+=VofPi[i]/d;
    }
    return num-(F+1);
}
double BinSearch(double lr,double rb)
{
    double lastPos=-1;
    while(!isEqual(lr,rb)){
        double mid=lr+(rb-lr)/2;
        if(feasible(mid)>=0){
            lastPos=mid;
            lr=mid;
        }
        else rb=mid;
    }
    return lastPos;
}
int main()
{
    scanf("%d %d",&N,&F);
    for(int i=0;i<N;i++){
        int t;
        scanf("%d",&t);
        double v=pi*t*t;
        VofPi[i]=v;
    }
    sort(VofPi,VofPi+N);
    double lb=0;//
    double rb=pi*(1e8);
    printf("%.3lf\n",BinSearch(lb,rb));
    return 0;
}
