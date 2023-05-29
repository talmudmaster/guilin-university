//ÊäÈë¡¢Êä³öË³Ğò±í 
#include <stdio.h>
#include "sqlist.h"

void createSq(SqList *L){
	scanf("%d",&L->len);
	int i;
	for(i=1;i<=L->len;i++){
		scanf("%d",&L->data[i]);
	}
}

void printSq(SqList L){
	int i;
	for(i=1;i<=L.len;i++){
		printf("%5d",L.data[i]);
	}
}

