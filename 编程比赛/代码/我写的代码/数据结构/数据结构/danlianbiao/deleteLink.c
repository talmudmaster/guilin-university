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
	if(p==NULL||j>location-1)//判断删除位置是否合法 
		return -1;//插入的位置有误 
	q=p->next; 
	p->next=q->next;//核心代码 删除结点q 
	free(q);//释放结点q的空间 
	return 1;
}
