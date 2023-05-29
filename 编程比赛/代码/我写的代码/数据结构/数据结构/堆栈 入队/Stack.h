#define MAXSIZE 100
#include <stdio.h>
struct Stack
{
	int top;
	char data[MAXSIZE]; 
};
typedef struct Stack Stack;

void create(Stack *s)//初始化 
{
	s->top=-1;
} 


void in(Stack *s,char x)//入栈 
{
	if(s->top==MAXSIZE-1)
	{
		printf("栈已满");
		return ;
	}
	s->top++;
	s->data[s->top]=x;
}

void out(Stack *s,char *e)//出栈 
{
	if(s->top==-1)
	{	
		printf("empty\t");
		return ;
	}
	*e=s->data[s->top];
	s->top--;
}

/*void conversion()//进制转换 
{
	int e,k;
	Stack s;
	create(&s);
	scanf("%d",&e);
	printf("请问你想 <把你输入的数> 转换成 <几进制的数> :\n");
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

