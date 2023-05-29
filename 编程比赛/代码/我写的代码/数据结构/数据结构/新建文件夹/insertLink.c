#include <stdio.h>
#include <malloc.h>
#include "linklist.h"

int insertLink(LinkList L,int location,ElemType x){
	LinkList p,q;
	p=L;
	int j=0;
	while(p&&j<location-1){
		p=p->next;
		j++;
	}
	if(p==NULL||j>location-1)
		return -1;
	q=(LinkList)malloc(sizeof(LNode));
	q->data=x;
	q->next=p->next;
	p->next=q; 
	return 1;
}

