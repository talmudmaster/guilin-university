//
// Created by ASUS on 2022/4/21.
//
#include<bits/stdc++.h>
using namespace std;
int *z, *h, N;
class tree{
public:
    int val;
    tree *L, *R;
    tree(int zl, int zr, int hl, int hr){
        val = h[hr];
        int index=0;
        for(; val!=z[zl+index]; index++);
        L = index==0?(nullptr):(new tree(zl, zl+index-1, hl, hl+index-1));
        R = index==zr-zl?(nullptr):(new tree(zl+index+1, zr, hl+index, hr-1));
    }
};

void f(vector<int> &l_view, vector<int> &r_view, tree *root){
    deque<tree*> que;
    que.push_front(root);
    l_view.push_back(root->val);
    int cl=1;
    for(root = que.front(); !que.empty(); root = que.front(), que.pop_front(), cl--){
        if(nullptr != root->L) que.push_back(root->L);
        if(nullptr != root->R) que.push_back(root->R);
        if(cl==0){
            cl = que.size();
            r_view.push_back(root->val);
            if(!que.empty()) l_view.push_back(que.front()->val);
        }
    }
}

int main(){
    cin >> N;
    z = new int[N];
    h = new int[N];
    for(int i=0; i<N; i++, cin >> z[i]);
    for(int i=0; i<N; i++, cin >> h[i]);
    tree* T = new tree(0, N-1, 0, N-1);

    vector<int> l_view, r_view;

    f(l_view, r_view, T);

    cout << "R:";
    for(int i=0; i<r_view.size(); i++, cout << " " << r_view[i]);
    cout << "\nL:";
    for(int i=0; i<l_view.size(); i++, cout << " " << l_view[i]);
    return 0;
}