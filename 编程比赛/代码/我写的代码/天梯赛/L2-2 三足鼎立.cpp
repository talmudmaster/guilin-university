#include <bits/stdc++.h>
using namespace std;

long long a[100005];
int main() {
    long long N,P,ans=0;
    cin>>N>>P;
    for (int i=0;i<N;i++) {
        cin>>a[i];
    }
    sort(a,a+N);
    for (int i=0;i<N;i++) {
        long long x=lower_bound(a+i+1,a+N,a[i]+P)-a;//取值范围内最大值的下标位置 
        long long y=upper_bound(a+i+1,a+N,P-a[i])-a;//值范围内最小值的下标位置
        ans+=x-y;//取值范围内符合的个数 
    }
    cout<<ans<<endl;
    return 0;
}
