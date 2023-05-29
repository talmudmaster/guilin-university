#include <stdio.h>
#include <stdlib.h>
#include "stack.h" 

void conversion(int n,int m);//实现十进制数转换成m进制数的函数 
void conversion(int n,int m){
	printf("%d的%d进制数为：",n,m);
	SqStack s;//创建堆栈 s 
	int t;
	initStack(&s);//初始化堆栈 s 
	while(n!=0){
		push(&s,n%m);//取n对m的余数放入堆栈s 
		n/=m;
	}
	while(s.top!=-1){
		pop(&s,&t);//将堆栈s中的数依次取出 
		printf("%d",t);
	}
	printf("\n");
}

int main() {
	int n,m;//n为将要转换的十进制数 
	printf("\n*****输入0结束运行*****\n");
	while(1){
		printf("\n请输入你想转换的十进制数：");
		scanf("%d",&n);
		if(n==0){//十进制数不符合规定，结束运行 
			break;
		}
		printf("请输入你想转换多少进制：");
		scanf("%d",&m);
		conversion(n,m);//调用 
	}
	return 0;
}
