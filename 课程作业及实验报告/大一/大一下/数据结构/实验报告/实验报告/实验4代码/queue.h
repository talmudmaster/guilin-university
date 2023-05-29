//队列结构体 
#define MAXSIZE 10000
typedef int ElemType;
struct Queue{
	ElemType data[MAXSIZE];
	int front;//队头 
	int rear;//队尾 
};
typedef struct Queue Queue;
//初始化队列 
void initQueue(Queue *q){
	q->front=-1;
	q->rear=-1;
}
//循环队列长度 
int getSqLength(Queue Q){
	return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}
//入队操作，插入 
void inQueue(Queue *q,ElemType e){
	if((q->rear+1)%MAXSIZE==q->front){//判断队列是否满 
		printf("full\n");
		return;
	}
	q->rear=(q->rear+1)%MAXSIZE;
	q->data[q->rear]=e;//元素e赋给队尾 
}
//出队操作，删除 
void delQueue(Queue *q,ElemType *e){
	if(q->front==q->rear){//判断队列是否为空 
		printf("empty\n");
		return;
	}
	q->front=(q->front+1)%MAXSIZE;
	*e=q->data[q->front];//将队头元素赋给e
}
