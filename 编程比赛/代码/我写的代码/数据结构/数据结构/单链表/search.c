#include <stdio.h>
#include <stdlib.h>
#include "LNode.h" 
int search(List L,int x)
{
	List p;
	p=L->next;
	int j=1;//给数找位置 
	while(p!=NULL&&p->data!=x){
    	p=p->next;
    	j++;
    }
	if(p!=NULL){
		return j;
	}else{
		return 0;
	}
}

/*
	//设置哨兵 
	int i;
	L.data[0]=x;
	i=len(L);
	flag=0;
	while(L.data[i]!=x){
		i--;
	}
	flag=i;
	return flag;

	//二分查找 
	int left=0,right,mid,flag=0;;
	mid=len(L)/2;
	right=len(L)-1;
	while(left==right){
		if(x==L.data[mid]){
			flag=mid;
			return flag;
		}else if(x>L.data[mid]){
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	return flag;

*/

