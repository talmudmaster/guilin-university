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
	q=(LinkList)malloc(sizeof(LNode));//为新结点q申请空间
	q->data=x;//将数据放入新结点data 
	q->next=p->next;//核心代码 将新元素q接入单链表L中 
	p->next=q; //将新元素q接在p->next的位置 
	return 1;
}

