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
	printf("��������Ҫ����λ��i�Ͳ������x��\n");
	scanf("%d %d",&i,&x);
	insert(&L,x,i);
	print(L);
	return 0;
}
void insert(list *L,int x,int i)//���� 
{
	int j;
	for(j=L->Len-1;j>=i-1;j--)//-1����Ϊ�����Ǵ��±�0��ʼ���� 
	{
		L->data[j+1]=L->data[j];// ��λ�ø�Ҫ������� 
	}
	L->data[i-1]=x;// ���������Ӧ��λ�� 
	L->Len=L->Len+1;//����+1 
}
void print(list L)//��� 
{
	int i;
	for(i=0;i<L.Len;i++)
	{
		printf("%d ",L.data[i]);
	} 
	printf("\n");
}
