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
	void insert(list *L,int n);
	int i;
	printf("请输入你要插入的数:\n");
	scanf("%d",&i);
	insert(&L,i);
	print(L);
	return 0;
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
void insert(list *L,int n)//使用二分法必须是有序的顺序表 
{
	int low=0,hight=L->Len-1,mid,key,j;
	while(low<=hight)
	{
		//断点值问题  暴力输出 
		if(n<=L->data[0])//最小 
		{
			key=0;
			break;
		}
		if(n>=L->data[L->Len-1])// 最大 
		{
			key=L->Len;
			break;
		}
		//找对应数的位置 
		mid=(low+hight)/2;
		if(n>=L->data[mid]&&n<L->data[mid+1])
		{
			key=mid+1;
			break;
		}
		else
		if(n<L->data[mid])
		{
			hight=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	for(j=L->Len-1;j>=key;j--)//找到到位置就插入进去 
	{
		L->data[j+1]=L->data[j];
	}
	L->data[key]=n;
	L->Len=L->Len+1;
}
