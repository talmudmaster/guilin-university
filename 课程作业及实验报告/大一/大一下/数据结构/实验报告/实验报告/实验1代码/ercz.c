//¶ş·Ö²éÕÒ
#include "SqList.h"
int ercz(SqList L,int er){
	int l,h,m;
	l=1;
	h=L.len;
	while(l<=h){
		m=(l+h)/2;
		if(er==L.data[m]){
			return m;
		}else if(er<L.data[m]){
			h=m-1;
		}else{
			l=m+1;
		}
	}
	return 0;
} 
