//��ջ�ṹ�� 
#define MAXSIZE 1000
typedef int ElemType;
struct SqStack{
	ElemType data[MAXSIZE];//data�������Ԫ�� 
	int top;//top��ʾջ���±� 
};
typedef struct SqStack SqStack;

void initStack(SqStack *s){//��ʼ��ջ��������ջ 
	s->top=-1;
}

void push(SqStack *s,ElemType x){//��ջ���������� 
	if(s->top==MAXSIZE-1){//��ջ���� 
		printf("full\n");
		return;
	}
	s->top++;//ջ���ƶ�һ��λ�� 
	s->data[s->top]=x;//��topλ�÷���Ԫ�أ���ջ�� 
}

void pop(SqStack *s,ElemType *x){//��ջ������ɾ�� 
	if(s->top==-1){//�ж�ջ�Ƿ�Ϊ�� 
		printf("empty\n");
		return;
	}
	*x=s->data[s->top];//��x��ջ��Ԫ�ط��� 
	s->top--;
}

