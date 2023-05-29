#include <stdio.h>
#include <stdlib.h>
#include "LNode.h" 
void print(List L)
{
	List p;
	p=L->next;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
}
