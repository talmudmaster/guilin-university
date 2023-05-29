#include <stdio.h>
#include "linklist.h"
void printLink(LinkList L){
	LinkList p;
	p=L->next;
	while(p!=NULL){//判断p是否为空 
		printf("%5d",p->data);
		p=p->next;//遍历单链表L所有元素 
	}
	printf("\n");
}
