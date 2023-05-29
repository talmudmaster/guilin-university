#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char *argv[]) {
	Queue A,B;//创建A,B队列模拟银行窗口 
	initQueue(&A);//初始化A,B队列 
	initQueue(&B);
	int n,x,i,t;
	int result[10100];//存放已办理序号 
	printf("num:");
	scanf("%d",&n);//输入办理人数 
	for(i=1;i<=n;i++){
		scanf("%d",&x);//输入办理序号 
		if(x%2){
			inQueue(&A,x);//奇数号去A队列 
		}else{
			inQueue(&B,x);//偶数号去B队列 
		}
	}
	i=1;
	while(A.front!=A.rear&&B.front!=B.rear){//判断队列A，队列B是否为空
		//将办理好的顾客序号存入数组
		delQueue(&A,&t);
		result[i++]=t;
		if(A.front!=A.rear){
			delQueue(&A,&t);
			result[i++]=t;
		}
		delQueue(&B,&t);
		result[i++]=t;
	}
	while(A.front!=A.rear){//判断队列A是否为空
		delQueue(&A,&t);
		result[i++]=t;//将办理好的顾客序号存入数组
	}
	while(B.front!=B.rear){//判断队列B是否为空 
		delQueue(&B,&t);
		result[i++]=t;//将办理好的顾客序号存入数组 
	}
	
	printf("%d",result[1]);
	for(i=2;i<=n;i++){
		printf(" %d",result[i]);//遍历输出数组 
	}
	return 0;
}
