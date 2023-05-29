//
// Created by ASUS on 2022/4/21.
//
#include<iostream>
using namespace std;

int getSum(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int f(int n){
    int heart = getSum(n*2);
    for(int i=3; i<10; i++){
        if(heart != getSum(n*i)) return -1;
    }
    return heart;
}

int main(){
    int n, t;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        int heart = f(t);
        if(heart==-1){
            cout << "NO" <<endl;
        }else{
            cout << heart <<endl;
        }
    }
    return 0;
}