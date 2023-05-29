#include<iostream>
using namespace std;
int getBit(int n,int i) {
    return (n>>i)&1;
}
void change(int n) {
    bool first=true;
    for(int i=15; i>=0; i--) {
        if(getBit(n,i)) {
            if(!first){
                printf("+");
            }
            else first=false;
            if(i==0) {
                printf("2(0)");
            } else if(i==1) {
                printf("2");
            } else {
                printf("2(");
                change(i);
                printf(")");
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    change(n);
    return 0;
}
