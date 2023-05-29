#define MAXSIZE 1000
typedef int ElemType;
typedef struct SqStack{
	ElemType data[MAXSIZE];
	int top;
}SqStack;

//��ʼ�� 
void initStack(SqStack *s){
	s->top=-1;
}

//��ջ-���� 
int Push(SqStack *s,ElemType x){
	if(s->top==MAXSIZE-1){
		return 0;
	}
	s->top++; 
	s->data[s->top]=x;
	return 1;
}

//��ջ-ɾ�� 
int Pop(SqStack *s,ElemType *x){
	if(s->top==-1){
		return 0;
	}
	*x=s->data[s->top];
	s->top--;
	return 1;
}
