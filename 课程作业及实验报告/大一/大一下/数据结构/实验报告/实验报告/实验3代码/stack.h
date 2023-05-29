//堆栈结构体 
#define MAXSIZE 1000
typedef int ElemType;
struct SqStack{
	ElemType data[MAXSIZE];//data用来存放元素 
	int top;//top表示栈顶下标 
};
typedef struct SqStack SqStack;

void initStack(SqStack *s){//初始化栈，创建空栈 
	s->top=-1;
}

void push(SqStack *s,ElemType x){//入栈操作，插入 
	if(s->top==MAXSIZE-1){//堆栈已满 
		printf("full\n");
		return;
	}
	s->top++;//栈顶移动一个位置 
	s->data[s->top]=x;//在top位置放入元素，即栈顶 
}

void pop(SqStack *s,ElemType *x){//出栈操作，删除 
	if(s->top==-1){//判断栈是否为空 
		printf("empty\n");
		return;
	}
	*x=s->data[s->top];//用x带栈顶元素返回 
	s->top--;
}

