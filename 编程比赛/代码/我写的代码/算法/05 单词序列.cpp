#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
bool judge(string a,string b){//判断两单词是否只是有一个字母不同
	int cnt=0;
	for(int i=0;i<a.size();++i) if(a[i]!=b[i]) ++cnt;
	if(cnt==1) return true;
	else return false;
}
int main()
{
	string tmp,start,final;
	vector<string> pq;//存中间单词
	cin>>start>>final;
	while(cin>>tmp) pq.push_back(tmp);
	pq.push_back(final);//将目的单词推入
	queue<string> yu;map<string,int> op;//op的值代表在转换序列中的顺序
        yu.push(start);op[start]=1;
	int flag=0;
	while(1){
		if(!yu.empty()) tmp=yu.front(),yu.pop();
		else break;
		if(tmp==final) {flag=1;break;}
		for(int i=0;i<pq.size();++i)
			if(judge(pq[i],tmp)&&!op.count(pq[i])) yu.push(pq[i]),op[pq[i]]=op[tmp]+1;
	}
	if(flag) cout<<op[final];
	else cout<<0;
	return 0;
}
