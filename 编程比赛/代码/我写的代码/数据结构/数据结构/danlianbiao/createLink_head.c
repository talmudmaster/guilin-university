#include <stdio.h>
#include <malloc.h>
#include "linklist.h"
//头插法 
LinkList createLink_head(){
	LinkList L,p;
	int n;
	L=(LinkList)malloc(sizeof(LNode));//为结点L申请空间 
	L->next=NULL;
	printf("单链表长度:");
	scanf("%d",&n);//输入单链表长度n 
	int i,x;
	printf("输入元素:");
	for(i=1;i<=n;i++){
		p=(LinkList)malloc(sizeof(LNode));//为新结点p申请空间
		scanf("%d",&x);
		p->data=x;//将数据放入新结点data 
		p->next=L->next;//核心代码 将新元素p接入单链表L中 
		L->next=p;//将新元素p接在L->next的位置 
	}
	return L;
}
