#define MAXSIZE 100
#include <stdio.h>
struct Stack
{
	int top;
	char data[MAXSIZE]; 
};
typedef struct Stack Stack;

void create(Stack *s)//��ʼ�� 
{
	s->top=-1;
} 


void in(Stack *s,char x)//��ջ 
{
	if(s->top==MAXSIZE-1)
	{
		printf("ջ����");
		return ;
	}
	s->top++;
	s->data[s->top]=x;
}

void out(Stack *s,char *e)//��ջ 
{
	if(s->top==-1)
	{	
		printf("empty\t");
		return ;
	}
	*e=s->data[s->top];
	s->top--;
}

/*void conversion()//����ת�� 
{
	int e,k;
	Stack s;
	create(&s);
	scanf("%d",&e);
	printf("�������� <�����������> ת���� <�����Ƶ���> :\n");
	scanf("%d",&k);
	while(e)
	{
		in(&s,e%k);
		e=e/k;
	}
	while(s.top!=-1)
	{
		out(&s,&e);
		printf("%2d",e);
	}
}*/

