#include<iostream>
using namespace std;

int main()
{
	int i,j,a[3][4],flag=0,min[4],max[3];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			cin>>a[i][j];		
	for(i=0;i<3;i++){
		max[i]=a[i][0];
		for(j=1;j<4;j++)
			if(a[i][j]>max[i])
				max[i]=a[i][j];
	}
	for(j=0;j<4;j++){
		min[j]=a[0][j];
		for(i=1;i<3;i++)
			if(a[i][j]<min[j])
				min[j]=a[i][j];			
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(min[j]==max[i]){
				flag=1;
				cout<<"������"<<min[j]<<",λ��"<<i<<"��"<<j<<"��";
			}
		}
	}
	if(flag==0)
		cout<<"�����ڰ���";	
	return 0;
}
