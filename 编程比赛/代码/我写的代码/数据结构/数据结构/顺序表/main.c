#include <stdio.h>
#include <stdlib.h>
typedef struct list{
	int Len;
	int data[50];
}list;
int main() {
	void create(list *L);//���� 
	void print(list L);//��� 
	int search(list L,int n);//˳����� 
	int search2(list L,int n);//�۰���� 
	void insert(list *L,int x,int i);//���� 
	void delete(list *L,int n);//ɾ�� 
	list L;
	create(&L);
	print(L);
	printf("\n");
//˳����� 
	int x;
	int G4,G5;
	printf("��������Ҫ��˳����ҵ���:\n");
	scanf("%d",&G4);
	x=search(L,G4);
	if(x==0)
	{printf("\nû�ҵ�\n"); }
	else
	{printf("���ڵ�%d��λ��\n",x);}
//�۰���� 
	int x2;
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
	printf("��������Ҫ���ĸ���λ�á��ĸ�ʲô��Ԫ�ء���\n");
	int G1,G2,G3;
	scanf("%d%d",&G2,&G1);
	insert(&L,G1,G2);
	print(L);
	printf("\n");
	printf("��������Ҫɾ����λ��:\n");
	scanf("%d",&G3);
	delete(&L,G3);
	print(L);
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
//˳����� 
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
//�۰���� 
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
//���� 
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
//ɾ�� 
void delete(list *L,int n)
{
	int j;
	for(j=n+1;j<=L->Len;j++)
	{
		L->data[j-1]=L->data[j];
	}
	L->Len--;
}
