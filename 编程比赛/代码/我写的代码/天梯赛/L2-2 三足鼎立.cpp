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
        long long x=lower_bound(a+i+1,a+N,a[i]+P)-a;//ȡֵ��Χ�����ֵ���±�λ�� 
        long long y=upper_bound(a+i+1,a+N,P-a[i])-a;//ֵ��Χ����Сֵ���±�λ��
        ans+=x-y;//ȡֵ��Χ�ڷ��ϵĸ��� 
    }
    cout<<ans<<endl;
    return 0;
}
