#include <stdio.h>
#include <stdlib.h>
#include "LNode.h" 
#include <malloc.h>
int insert(List L,int i,int x)
{
	List p,q;
	p=L;
	int j=0;
	while(p!=NULL&&j<i-1){
		p=p->next;
		j++;
	}
	q=(List)malloc(sizeof(LNode));
	q->data=x;
	if(p!=NULL){
		q->next=p->next;
		p->next=q;
		return 1;
	}else{
		return 0;
	}
}
