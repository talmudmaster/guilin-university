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
	q=(LinkList)malloc(sizeof(LNode));//Ϊ�½��q����ռ�
	q->data=x;//�����ݷ����½��data 
	q->next=p->next;//���Ĵ��� ����Ԫ��q���뵥����L�� 
	p->next=q; //����Ԫ��q����p->next��λ�� 
	return 1;
}

