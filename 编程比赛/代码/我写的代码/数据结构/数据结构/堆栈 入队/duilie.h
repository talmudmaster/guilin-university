#include <stdio.h>
#include <stdlib.h>
struct queue
{
	int front;
	int rear;
	char a[100];
};
typedef struct queue queue;
void initqueue(queue *s)//初始化 
{
	s->front=-1;
	s->rear=-1;
}
void insert(queue *s,char o)//入队 
{
	s->rear++;
	s->a[s->rear]=o;
}
void del(queue *s,char *L)//出队 
{
	s->front++;
	*L=s->a[s->front];
}
