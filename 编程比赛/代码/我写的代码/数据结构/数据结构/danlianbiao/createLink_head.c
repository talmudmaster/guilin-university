#include <stdio.h>
#include <malloc.h>
#include "linklist.h"
//ͷ�巨 
LinkList createLink_head(){
	LinkList L,p;
	int n;
	L=(LinkList)malloc(sizeof(LNode));//Ϊ���L����ռ� 
	L->next=NULL;
	printf("��������:");
	scanf("%d",&n);//���뵥������n 
	int i,x;
	printf("����Ԫ��:");
	for(i=1;i<=n;i++){
		p=(LinkList)malloc(sizeof(LNode));//Ϊ�½��p����ռ�
		scanf("%d",&x);
		p->data=x;//�����ݷ����½��data 
		p->next=L->next;//���Ĵ��� ����Ԫ��p���뵥����L�� 
		L->next=p;//����Ԫ��p����L->next��λ�� 
	}
	return L;
}
