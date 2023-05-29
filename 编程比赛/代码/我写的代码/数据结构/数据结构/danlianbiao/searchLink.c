#include <stdio.h>
#include "linklist.h"

int searchLink(LinkList L,int location,ElemType *e)
{
	int j=1;
	LinkList p;
	p=L->next;
	while(p!=NULL&&j<location){//判断L中location位置上的元素合法性 
		p=p->next;
		j++;
	}
	if(p==NULL||j>location){
		return -1;//不合法 
	}
	*e=p->data;
	return 1;
	
}
