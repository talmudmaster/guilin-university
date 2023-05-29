//在指定位置插入元素
#include "sqlist.h" 

void insertSq(SqList *L,int location,int x){
	if(location<0||location>L->len){
		printf("Error\n");return;
	}
	if(L->len==MAXSIZE){
		printf("Full\n");return;
	}
	int i;
	for(i=L->len;i>=location;i--){
		L->data[i+1]=L->data[i];
	}
	L->data[location]=x;
	L->len++;
}
