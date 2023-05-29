#include <stdio.h>
#include <malloc.h>

typedef int ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList Create();
void print( LinkList L);

int main()
{
	  LinkList L = Create();
	  print(L);
	  return 0;
}
LinkList Create()
{
	LinkList L,p,s;
	ElemType e;
	L = (LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	p=L;
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d",&e);
		s = (LinkList)malloc(sizeof(LNode));
		s->data=e;
		p->next=s;
		p=s;
		n--;
	}
	p->next=NULL;
    return L;
}
void print(LinkList L)
{ 
	LinkList p;
    p=L->next;
	while (p)
	{
	     printf("%d", p->data);
	     if(p->next)
	     	printf(" ");
 	     p =p->next;
	}
}
