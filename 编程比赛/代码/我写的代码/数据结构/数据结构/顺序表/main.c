#include <stdio.h>
#include <stdlib.h>
typedef struct list{
	int Len;
	int data[50];
}list;
int main() {
	void create(list *L);//创建 
	void print(list L);//输出 
	int search(list L,int n);//顺序查找 
	int search2(list L,int n);//折半查找 
	void insert(list *L,int x,int i);//插入 
	void delete(list *L,int n);//删除 
	list L;
	create(&L);
	print(L);
	printf("\n");
//顺序查找 
	int x;
	int G4,G5;
	printf("请输入你要按顺序查找的数:\n");
	scanf("%d",&G4);
	x=search(L,G4);
	if(x==0)
	{printf("\n没找到\n"); }
	else
	{printf("它在第%d个位置\n",x);}
//折半查找 
	int x2;
	printf("请输入折半查找的数:\n");
	scanf("%d",&G5);
	x2=search2(L,G5);
	if(x2==0)
	{
		printf("没找到\n");
	}
	else
	{
		printf("它在第%d个位置\n",x2);
	}
	printf("\n");
	printf("请输入你要在哪个《位置》哪个什么《元素》：\n");
	int G1,G2,G3;
	scanf("%d%d",&G2,&G1);
	insert(&L,G1,G2);
	print(L);
	printf("\n");
	printf("请输入你要删除的位置:\n");
	scanf("%d",&G3);
	delete(&L,G3);
	print(L);
	return 0;
}
//创建 
void create(list *L)
{
	int i;
	printf("请输入list的长度:\n"); 
	scanf("%d",&L->Len);
	printf("请输入list的存储元素:\n");
	for(i=1;i<=L->Len;i++)
	{
		scanf("%d",&L->data[i]);
	}
}
//输出 
void print(list L)
{
	int i;
	for(i=1;i<=L.Len;i++)
	{
		printf("%d\t",L.data[i]);
	}
}
//顺序查找 
int search(list L,int n)
{
	int i,j=0;
	for(i=1;i<=L.Len;i++)
	{
		j++;
		if(n==L.data[i])
		{
			return j;
		}
	}
	return 0;
}
//折半查找 
int search2(list L,int n)
{
	int low=1,hight=L.Len,mid;
	while(low<=hight)
	{
		mid=(low+hight)/2;
		if(n==L.data[mid])
		{
			return mid;
		}
		else
		if(n<L.data[mid])
		{
			hight=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return 0;
}
//插入 
void insert(list *L,int x,int i)
{
	int j;
	for(j=L->Len;j>=i;j--)
	{
		L->data[j+1]=L->data[j];
	}	
		L->data[i]=x;
		L->Len++;
}
//删除 
void delete(list *L,int n)
{
	int j;
	for(j=n+1;j<=L->Len;j++)
	{
		L->data[j-1]=L->data[j];
	}
	L->Len--;
}
