//���нṹ�� 
#define MAXSIZE 10000
typedef int ElemType;
struct Queue{
	ElemType data[MAXSIZE];
	int front;//��ͷ 
	int rear;//��β 
};
typedef struct Queue Queue;
//��ʼ������ 
void initQueue(Queue *q){
	q->front=-1;
	q->rear=-1;
}
//ѭ�����г��� 
int getSqLength(Queue Q){
	return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}
//��Ӳ��������� 
void inQueue(Queue *q,ElemType e){
	if((q->rear+1)%MAXSIZE==q->front){//�ж϶����Ƿ��� 
		printf("full\n");
		return;
	}
	q->rear=(q->rear+1)%MAXSIZE;
	q->data[q->rear]=e;//Ԫ��e������β 
}
//���Ӳ�����ɾ�� 
void delQueue(Queue *q,ElemType *e){
	if(q->front==q->rear){//�ж϶����Ƿ�Ϊ�� 
		printf("empty\n");
		return;
	}
	q->front=(q->front+1)%MAXSIZE;
	*e=q->data[q->front];//����ͷԪ�ظ���e
}
