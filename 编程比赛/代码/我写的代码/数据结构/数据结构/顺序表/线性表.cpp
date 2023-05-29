#include <stdio.h>
#include <stdlib.h>
typedef struct Sqlist{
	int data[50];
	int Len;
}list;
int main(int argc, char *argv[]) {
	list L={2,4,6,8,10,12};
	L.Len=6;
	void print(list L);
	void insert(list *L,int x,int i);
	int i,x;
	print(L);
	printf("请输入你要插入位置i和插入的数x：\n");
	scanf("%d %d",&i,&x);
	insert(&L,x,i);
	print(L);
	return 0;
}
void insert(list *L,int x,int i)//插入 
{
	int j;
	for(j=L->Len-1;j>=i-1;j--)//-1是因为数组是从下标0开始计算 
	{
		L->data[j+1]=L->data[j];// 腾位置给要插入的数 
	}
	L->data[i-1]=x;// 把数插入对应的位置 
	L->Len=L->Len+1;//长度+1 
}
void print(list L)//输出 
{
	int i;
	for(i=0;i<L.Len;i++)
	{
		printf("%d ",L.data[i]);
	} 
	printf("\n");
}
