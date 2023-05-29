#include <stdio.h>
#include <stdlib.h>

typedef int elementType;
typedef struct lnode 
{
	elementType data; 
	struct lnode *next; 
}Lnode,* LinkList;

int main(int argc, char *argv[]) {
	LinkList createL();
	void printL(LinkList L);	
	int insertL(LinkList L,int x);
    LinkList L;
	L= createL();
	int a=0; 
    scanf("%d",&a);
	insertL(L,a);
	printL(L);
}

LinkList createL()
{
	LinkList L,p;
	L=(LinkList)malloc(sizeof(Lnode));
	L->next=NULL;
    int n;
	scanf("%d",&n);
	int i;
	for(i=n;i>0;i--)
	{
		p=(LinkList)malloc(sizeof(Lnode));
		scanf("%d",&p->data);
		p->next=L->next;
		L->next=p;
	}
	return L;
}

int insertL(LinkList L,int x)
{
	LinkList p,s;
	s=(LinkList)malloc(sizeof(Lnode));
	s->next=NULL;
	int j;
	j=0;
	p=L;
	while(p!=NULL&&p->data>x)
    {
    	p=p->next;
    	p->data=x;
    	j++;
    }
    if(p!=NULL)
    {
    	s->next=p->next;
    	p->next=s;
    }
}
	
void printL(LinkList L)
{
	LinkList p;
    p=L->next;
    while(p!=NULL)
    {
    	printf("%d ",p->data);
    	p=p->next;
    }
}
