#include <stdio.h>
#include <stdlib.h>
#include "LNode.h" 
#include <malloc.h>
List create()
{
	List L,p,q;//����ͷ��β
	L=(List)malloc(sizeof(LNode));//���ٿռ�
	L->next=NULL;
	q=L;
	int n;
	printf("�������㳤��:\n");
	scanf("%d",&n);
	int i;
	printf("�����뵥�����Ԫ��:\n");
	for(i=1;i<=n;i++)
	{
		p=(List)malloc(sizeof(LNode));//���ٿռ�
		scanf("%d",&p->data);
		q->next=p;
		q=p;
	} 
	q->next=NULL;
	return L;
} 
