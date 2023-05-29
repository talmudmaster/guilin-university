#include <stdio.h>
#include <stdlib.h>
#include "stack.h" 

void conversion(int n,int m);//ʵ��ʮ������ת����m�������ĺ��� 
void conversion(int n,int m){
	printf("%d��%d������Ϊ��",n,m);
	SqStack s;//������ջ s 
	int t;
	initStack(&s);//��ʼ����ջ s 
	while(n!=0){
		push(&s,n%m);//ȡn��m�����������ջs 
		n/=m;
	}
	while(s.top!=-1){
		pop(&s,&t);//����ջs�е�������ȡ�� 
		printf("%d",t);
	}
	printf("\n");
}

int main() {
	int n,m;//nΪ��Ҫת����ʮ������ 
	printf("\n*****����0��������*****\n");
	while(1){
		printf("\n����������ת����ʮ��������");
		scanf("%d",&n);
		if(n==0){//ʮ�����������Ϲ涨���������� 
			break;
		}
		printf("����������ת�����ٽ��ƣ�");
		scanf("%d",&m);
		conversion(n,m);//���� 
	}
	return 0;
}
