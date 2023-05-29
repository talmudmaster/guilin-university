#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int main(int argc, char *argv[]) {
	LinkList createLink_tail();//尾插入 
	//LinkList createLink_head();//头插入 
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
	printf("请输入要查找的位置:");
	scanf("%d",&location);
	t=searchLink(L,location,&e);
	if(t>0){
		printf("找到了,是 %d\n",e);
	}
	else if(t==-1){//查找位置不合法 
		printf("没找到!\n");
	}
	
	int x;
	printf("请输入要插入的位置及插入的数 \n");
	scanf("%d %d",&location,&x);
	t=insertLink(L,location,x);
	if(t>0){
		printLink(L);//打印插入元素x后的单链表L 
	}
	else if(t==-1){
		printf("输入的位置出错\n");
	}
	
	printf("请输入要删除的位置:");
	scanf("%d",&location);
	t=deleteLink(L,location);
	if(t>0){
		printLink(L);//打印删除元素x后的单链表L 
	}
	else if(t==-1){
		printf("输入的位置出错\n");
	}
	return 0;
}
