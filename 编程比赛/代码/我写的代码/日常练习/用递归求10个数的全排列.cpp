#include<iostream>
using namespace std;
 
int star[]={0,1,2,3,4,5,6,7,8,9,10,12};//0����
#define Swap(a,b){int temp=a;a=b;b=temp;}//���� 
int num=0;//ͳ��ȫ���еĸ�������֤�ǲ���362880 

int Perm(int begin,int end){
	int i;
	if(begin==end)//���������һ��ȫ���� 
		num++;//ͳ��ȫ���еĸ��� 
	else
	for(i=begin;i<=end;i++){
		Swap(star[begin],star[i]);//����λ�ã���ǰ�� 
		Perm(begin+1,end);
		Swap(star[begin],star[i]);//��λ�û���ȥ������һ�����и��� 
	}
}

int main()
{
	Perm(1,10);//��ӵ�1��������10������ȫ���� 
	cout<<num<<"\n";//��ӡ������������Ӧ����362880 
} 

