#include <stdio.h>
#include <stdlib.h>
typedef struct list{
	int Len;
	int data[50];
}list;
int main()
{
	void create(list *L);//���� 
	void print(list L);//��� 
	void bubblesort(list *L); //ð��
	void selectsort(list *L);//ѡ�� 
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
	printf("�������۰���ҵ���:\n");
	scanf("%d",&G5);
	x2=search2(L,G5);
	if(x2==0)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("���ڵ�%d��λ��\n",x2);
	}
	printf("\n");
	return 0;
} 
//���� 
void create(list *L)
{
	int i;
	printf("������list�ĳ���:\n"); 
	scanf("%d",&L->Len);
	printf("������list�Ĵ洢Ԫ��:\n");
	for(i=1;i<=L->Len;i++)
	{
		scanf("%d",&L->data[i]);
	}
}
//��� 
void print(list L)
{
	int i;
	for(i=1;i<=L.Len;i++)
	{
		printf("%d\t",L.data[i]);
	}
}
//ð�� 
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
//ѡ�� 
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
//���ֲ��� 
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

