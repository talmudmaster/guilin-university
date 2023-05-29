//删除指定位置元素
#include "sqlist.h"

void outSq(SqList *L,int location){
	if(location<0||location>L->len){
		printf("Error\n");return;
	}
	if(L->len==0){
		printf("Empty\n");
	}
	int i;
	for(i=location;i<L->len;i++){
		L->data[i]=L->data[i+1];
	}
	L->len--;
} 
