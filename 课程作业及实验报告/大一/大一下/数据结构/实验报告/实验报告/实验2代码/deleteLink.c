#include <stdio.h>
#include <malloc.h>
#include "linklist.h"

int deleteLink(LinkList L,int location){
	LinkList p,q;
	p=L;
	int j=0;
	while(p&&j<location-1){
		p=p->next;
		j++;
	}
	if(p==NULL||j>location-1)
		return -1;
	q=p->next;
	p->next=q->next;
	free(q);
	return 1;
}
