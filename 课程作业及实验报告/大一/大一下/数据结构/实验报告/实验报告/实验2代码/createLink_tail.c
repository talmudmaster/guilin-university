#include <stdio.h>
#include <malloc.h>
#include "linklist.h"

LinkList createLink_tail(){
	LinkList L,p,tail;
	int n;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	tail=L;
	printf("��������:");
	scanf("%d",&n);
	int i,x;
	printf("����Ԫ��:");
	for(i=1;i<=n;i++){
		p=(LinkList)malloc(sizeof(LNode));
		scanf("%d",&x);
		p->data=x;
		tail->next=p;
		tail=p;
	}
	tail->next=NULL;	
	return L;
}
