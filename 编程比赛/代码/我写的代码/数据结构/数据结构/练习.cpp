#include <stdio.h>
#include <stdlib.h> 
typedef struct list
{
	int Len;
	int data[1000];
}list;
int main()
{
	void createlist(list *L);
	void printlist(list );
	int zheban(list L,int n);
	list L;
	createlist(&L);
	printlist(L); 
	int x1,x2;
	printf("\n二分:\n");
	scanf("%d",&x2);
	x1=zheban(L,x2);
	if(x1==0)
	{
		printf("没找到.\n");
	}
	else
	{
		printf("找到了，它在第%d个位置上.",x1);
	} 
}
void createlist(list *L)
{
	int i;
	scanf("%d",&L->Len);
	for(i=1;i<=L->Len;i++)
	{
		scanf("%d",&L->data[i]);
	}
}
void printlist(list L)
{
	int i;
	for(i=1;i<=L.Len;i++)
	{
		printf("%d\t",L.data[i]);
	}
}
int zheban(list L,int n)
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
