#include <stdio.h>
#include <malloc.h>
#include "linklist.h"

LinkList createLink_tail(){
	LinkList L,p,tail;//tail�����һ����� 
	int n;
	L=(LinkList)malloc(sizeof(LNode));//Ϊ���L����ռ� 
	L->next=NULL;
	tail=L;
	printf("��������:");
	scanf("%d",&n);
	int i,x;
	printf("����Ԫ��:");
	for(i=1;i<=n;i++){
		p=(LinkList)malloc(sizeof(LNode));//Ϊ�½��p����ռ�
		scanf("%d",&x);
		p->data=x;//�����ݷ����½��data 
		tail->next=p;//���Ĵ��� ����Ԫ��p���뵥����L�� 
		tail=p;//����Ԫ��p����L->next��λ�� 
	}
	tail->next=NULL;	
	return L;
}
