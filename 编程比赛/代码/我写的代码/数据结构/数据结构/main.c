#include <stdio.h>
#include <stdlib.h>
#include"sqlist.h"

int main(int argc, char *argv[]) {
	void conversion(int n);
	
	//int a;
	//scanf("%d",&a);
	conversion(10000); 
	return 0;
}

void conversion(int n){
	SqStack s;
	initStack(&s);
	while(n!=0){
		Push(&s,n%2);
		n/=2;
	}
	//ÊÕ³öÕ»ÔªËØ 
	ElemType x; 
	while(s.top!=-1){
		Pop(&s,&x);
		printf("%d ",x);
	}
} 
