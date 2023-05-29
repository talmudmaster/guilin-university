#include <stdio.h>
#include <stdlib.h>
typedef struct list{
	int Len;
	int data[50];
}list;
int main()
{
	void create(list *L);//创建 
	void print(list L);//输出 
	void bubblesort(list *L); //冒泡
	void selectsort(list *L);//选择 
	int search2(list L,int n);
	list L;
	create(&L);
	print(L);
	printf("\n");
	bubblesort(&L);
	print(L);
	printf("\n");
	selectsort(&L);
	print(L);
	int x2,G5;
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
//冒泡 
void bubblesort(list *L)
{
	int i,p,t=0;//p=len;
	for(p =L->Len;1<=p;p--)
	{
	for(i=1;i<p;i++)
	{                                                                                                                                                                                                                                      
		if(L->data[i]>L->data[i+1])
		{
			t=L->data[i];
			L->data[i]=L->data[i+1];
			L->data[i+1]=t; 
		}
	}
	}
}
//选择 
void selectsort(list *L)
{
	int i,j,min,t=0;
	for(i=1;i<L->Len;i++ )
	{
		min=i;
		for(j=i+1;j<=L->Len;j++)
		if(L->data[min]>L->data[j])
		min=j;
		if(i!=min)
		{
			t=L->data[i];
			L->data[i]=L->data[min];
			L->data[min]=t; 
		} 
		
	}
}
//二分查找 
int search2(list L,int n)
{
	int low=0,hight=L.Len,mid;
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

