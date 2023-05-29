//À≥–Ú≤È’“
#include "SqList.h"
int xunzhao(SqList L,int sf){
	int i=1;
	while(1){
		if(L.data[i]==sf){
			return i;
		}else if(i==L.len){
			return 0;
		}
		i++;
	}
} 
