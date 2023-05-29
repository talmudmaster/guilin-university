#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "duilie.h"
int main() 
{
	void create(Stack *s);
	void in(Stack *s,char x);
	void out(Stack *s,char *e);
//	void conversion();
	void initqueue(queue *s);
	void insert(queue *s,char o);
	void del(queue *s,char *L);	
	printf("堆栈和队列算法判断一串字符串是否是回文:\n");
	int huiwen();
	int c;
	c=huiwen();
	if(c==1)
	{
		printf("It is hui wen.\n");
	}
	else
	printf("It not is.\n");	
		
	printf("堆栈算法输入一串字符:\n");	
	Stack A;
	char e,s;
	create(&A);
	scanf("%c",&s);	
	while(s!='\n')
	{
		in(&A,s);
		scanf("%c",&s);
	}
	while(A.top!=-1)
	{
		out(&A,&e);
		printf("%c",e);
	}
	printf("\n");
	printf("队列算法输入一串字符:\n"); 
	char m,L;
	queue B;
	initqueue(&B);
	while(m!='\n')
	{
		scanf("%c",&m);
		insert(&B,m);
	}
	while(B.rear!=B.front)
	{
		del(&B,&L);
		printf("%c",L);
	}
	

	return 0;
}
int huiwen()
{
		Stack C;
		queue D;
		create(&C);
		initqueue(&D);
		char A1,A2,A3;
		scanf("%c",&A1);
		while(A1!='\n')
		{
			in(&C,A1);
			insert(&D,A1);
			scanf("%c",&A1);
		}
		while(C.top!=-1&&D.front!=D.rear)
		{
			out(&C,&A2);
			del(&D,&A3);
			if(A2!=A3)
			{
				return 0;
			}
		}
		return 1;
}
/*	printf("\n");
	printf("请输入你要转换的数：\n");
	conversion();*/

