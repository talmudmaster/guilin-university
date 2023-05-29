#include<iostream>
using namespace std;
 
int star[]={0,1,2,3,4,5,6,7,8,9,10,12};//0不用
#define Swap(a,b){int temp=a;a=b;b=temp;}//交换 
int num=0;//统计全排列的个数，验证是不是362880 

int Perm(int begin,int end){
	int i;
	if(begin==end)//结束，输出一个全排列 
		num++;//统计全排列的个数 
	else
	for(i=begin;i<=end;i++){
		Swap(star[begin],star[i]);//交换位置，逐步前提 
		Perm(begin+1,end);
		Swap(star[begin],star[i]);//将位置还回去，对下一次排列负责 
	}
}

int main()
{
	Perm(1,10);//求从第1个数到第10个数的全排列 
	cout<<num<<"\n";//打印出排列总数，应该是362880 
} 

