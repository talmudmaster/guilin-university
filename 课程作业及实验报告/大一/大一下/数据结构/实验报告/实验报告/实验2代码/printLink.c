#include <stdio.h>
#include "linklist.h"
void printLink(LinkList L){
	LinkList p;
	p=L->next;
	while(p!=NULL){
		printf("%5d",p->data);
		p=p->next;
	}
	printf("\n");
}
