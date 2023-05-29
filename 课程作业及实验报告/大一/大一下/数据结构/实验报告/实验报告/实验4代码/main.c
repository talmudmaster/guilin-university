#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char *argv[]) {
	Queue A,B;//����A,B����ģ�����д��� 
	initQueue(&A);//��ʼ��A,B���� 
	initQueue(&B);
	int n,x,i,t;
	int result[10100];//����Ѱ������ 
	printf("num:");
	scanf("%d",&n);//����������� 
	for(i=1;i<=n;i++){
		scanf("%d",&x);//���������� 
		if(x%2){
			inQueue(&A,x);//������ȥA���� 
		}else{
			inQueue(&B,x);//ż����ȥB���� 
		}
	}
	i=1;
	while(A.front!=A.rear&&B.front!=B.rear){//�ж϶���A������B�Ƿ�Ϊ��
		//������õĹ˿���Ŵ�������
		delQueue(&A,&t);
		result[i++]=t;
		if(A.front!=A.rear){
			delQueue(&A,&t);
			result[i++]=t;
		}
		delQueue(&B,&t);
		result[i++]=t;
	}
	while(A.front!=A.rear){//�ж϶���A�Ƿ�Ϊ��
		delQueue(&A,&t);
		result[i++]=t;//������õĹ˿���Ŵ�������
	}
	while(B.front!=B.rear){//�ж϶���B�Ƿ�Ϊ�� 
		delQueue(&B,&t);
		result[i++]=t;//������õĹ˿���Ŵ������� 
	}
	
	printf("%d",result[1]);
	for(i=2;i<=n;i++){
		printf(" %d",result[i]);//����������� 
	}
	return 0;
}
