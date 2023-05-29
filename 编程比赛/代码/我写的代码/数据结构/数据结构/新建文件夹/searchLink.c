#include <stdio.h>
#include "linklist.h"

int searchLink(LinkList L,int location,ElemType *e)
{
	int j=1;
	LinkList p;
	p=L->next;
	while(p!=NULL&&j<location){
		p=p->next;
		j++;
	}
	if(p==NULL||j>location){
		return -1;
	}
	*e=p->data;
	return 1;
	
}
