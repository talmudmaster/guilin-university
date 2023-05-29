#include <stdio.h>
#include <stdlib.h>
#include "LNode.h" 
int delete(List L,int x)
{
	List p,q;
	p=L->next;
	q=L;
	int j=1; 
	while(p!=NULL&&j<x)
	{
		q=p;
		p=p->next;
		j++; 
	}
		if(p!=NULL)
	{
		q->next=p->next;
		free(p);
		return 1;
	} 
		else
	{
		return 0;
	}
}

