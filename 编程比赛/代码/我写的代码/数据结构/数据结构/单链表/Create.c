#include <stdio.h>
#include <stdlib.h>
#include "LNode.h" 
#include <malloc.h>
List create()
{
	List L,p,q;//定义头、尾
	L=(List)malloc(sizeof(LNode));//开辟空间
	L->next=NULL;
	q=L;
	int n;
	printf("请输入结点长度:\n");
	scanf("%d",&n);
	int i;
	printf("请输入单链表的元素:\n");
	for(i=1;i<=n;i++)
	{
		p=(List)malloc(sizeof(LNode));//开辟空间
		scanf("%d",&p->data);
		q->next=p;
		q=p;
	} 
	q->next=NULL;
	return L;
} 
