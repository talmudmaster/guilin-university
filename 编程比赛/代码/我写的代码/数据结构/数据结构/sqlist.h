#define MAXSIZE 1000
typedef int ElemType;
typedef struct SqStack{
	ElemType data[MAXSIZE];
	int top;
}SqStack;

//初始化 
void initStack(SqStack *s){
	s->top=-1;
}

//入栈-增加 
int Push(SqStack *s,ElemType x){
	if(s->top==MAXSIZE-1){
		return 0;
	}
	s->top++; 
	s->data[s->top]=x;
	return 1;
}

//出栈-删除 
int Pop(SqStack *s,ElemType *x){
	if(s->top==-1){
		return 0;
	}
	*x=s->data[s->top];
	s->top--;
	return 1;
}
