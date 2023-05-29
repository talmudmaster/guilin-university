#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

int main(int argc, char *argv[]) {
	void createSq(SqList *L);// 创建顺序表 
	void printSq(SqList L); //输出顺序表
	void insertSq(SqList *L,int location,int x);// 插入一个元素到顺序表的location位置
	void outSq(SqList *L,int location);// 在顺序表的Location位置刪除一个元素
	int xunzhao(SqList L,int sf);// 顺序査找一个元素
	int ercz(SqList L,int er);//二分査找一个元素

	SqList L;
	createSq(&L);//输入顺序表 
	printSq(L);//输出顺序表 
	
	printf("\n输入插入位置及插入的数:");
	int lon,x;
	scanf("%d%d",&lon,&x);
	insertSq(&L, lon,x);//在指定位置插入指定元素 
	printSq(L);
	
	printf("\n输入删除位置: ");
	int sc;
	scanf("%d",&sc);
	outSq(&L,sc);//刪除指定位置的元素
	printSq(L);
	
	printf("\n顺序查找>请输入要查找的数："); 
	int sf;
	scanf("%d",&sf);
	int xz=0;
	xz=xunzhao(L,sf); //二分查找指定元素 
	if(xz>0){
		printf("找到了，在第%d个",xz);
	} else{
		printf("没找到");
	}
	
	printf("\n二分查找>请输入要查找的数：");
	int er;
	scanf("%d",&er);
	int et=0;
	et=xunzhao(L,er); //二分查找指定元素 
	if(et>0){
		printf("找到了，在第%d个",et);
	} else{
		printf("没找到");
	}
	return 0;
}
	
	
	



