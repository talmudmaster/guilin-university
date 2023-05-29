#include<iostream>
#include<algorithm>
#include<cstring>
#include<stdio.h>
using namespace std;
struct student{
	int id;
	float score;
	int rank;
}stu[101];
bool compare(student a,student b){
	if(a.score!=b.score)
        return a.score>b.score;
    else
        return a.id<b.id; 
}
int main()
{
    int i,n,r=1,num=1,m=1;
    cin>>n;
    for(i=0;i<n;i++){
    	cin>>stu[i].id>>stu[i].score;
	}
	sort(stu,stu+n,compare);
    printf("%d %d %.2f\n",m,stu[0].id,stu[0].score);
    m++;
    for(i=1;i<n;i++){
    	if(stu[i].score!=stu[i-1].score){
    		num=m;
    		printf("%d %d %.2f\n",m,stu[i].id,stu[i].score);
		}else{
			printf("%d %d %.2f\n",num,stu[i].id,stu[i].score);
		}
    	m++;
	}
}
