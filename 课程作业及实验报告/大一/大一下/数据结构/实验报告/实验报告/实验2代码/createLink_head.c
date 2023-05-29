#include <stdio.h>
#include <malloc.h>
#include "linklist.h"

LinkList createLink_head(){
	LinkList L,p;
	int n;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	printf("单链表长度:");
	scanf("%d",&n);
	int i,x;
	printf("输入元素:");
	for(i=1;i<=n;i++){
		p=(LinkList)malloc(sizeof(LNode));
		scanf("%d",&x);
		p->data=x;
		p->next=L->next;
		L->next=p;
	}
	return L;
}
