#include <stdio.h>
#include <malloc.h>
#include "linklist.h"

LinkList createLink_head(){
	LinkList L,p;
	int n;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	printf("��������:");
	scanf("%d",&n);
	int i,x;
	printf("����Ԫ��:");
	for(i=1;i<=n;i++){
		p=(LinkList)malloc(sizeof(LNode));
		scanf("%d",&x);
		p->data=x;
		p->next=L->next;
		L->next=p;
	}
	return L;
}
