#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int main(int argc, char *argv[]) {
	LinkList createLink_tail();//β���� 
	//LinkList createLink_head();//ͷ���� 
	int searchLink(LinkList L,int location,ElemType *e);
	int insertLink(LinkList L,int location,ElemType x);
	int deleteLink(LinkList L,int location);
	void printLink(LinkList L);
	
	LinkList L;
	//L=createLink_head();
	L=createLink_tail();
	printLink(L);
	
	int t=0;
	int e,location;
	printf("������Ҫ���ҵ�λ��:");
	scanf("%d",&location);
	t=searchLink(L,location,&e);
	if(t>0){
		printf("�ҵ���,�� %d\n",e);
	}
	else if(t==-1){//����λ�ò��Ϸ� 
		printf("û�ҵ�!\n");
	}
	
	int x;
	printf("������Ҫ�����λ�ü�������� \n");
	scanf("%d %d",&location,&x);
	t=insertLink(L,location,x);
	if(t>0){
		printLink(L);//��ӡ����Ԫ��x��ĵ�����L 
	}
	else if(t==-1){
		printf("�����λ�ó���\n");
	}
	
	printf("������Ҫɾ����λ��:");
	scanf("%d",&location);
	t=deleteLink(L,location);
	if(t>0){
		printLink(L);//��ӡɾ��Ԫ��x��ĵ�����L 
	}
	else if(t==-1){
		printf("�����λ�ó���\n");
	}
	return 0;
}
