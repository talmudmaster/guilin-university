#include <stdio.h>
#include "linklist.h"
void printLink(LinkList L){
	LinkList p;
	p=L->next;
	while(p!=NULL){//�ж�p�Ƿ�Ϊ�� 
		printf("%5d",p->data);
		p=p->next;//����������L����Ԫ�� 
	}
	printf("\n");
}
