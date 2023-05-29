#include <stdio.h>
#include <stdlib.h>
#include "LNode.h" 
int main(int argc, char *argv[]) {
	//函数的声明
	 List create();//创建 
	 void print(List L);//输出 
	 int search(List L,int i);//查找
	 int delete(List L,int x);//删除
	 int insert(List L,int i,int x);//插入 
	//函数的调用
	 List L;
	 L=create();
	 print(L);
	 int i,x;
	 printf("n\输入你要找的数:\n");
	 scanf("%d",&i);
	 x=search(L,i);
	 if(x>0)
	 {
	 	printf("找到了,他在第 %d 个位置\n",x);
	 }
	 else
	 {
	 	printf("没找到\n");
	 }
	 int a,c,e;
	 printf("\n请输入你要在链表  <哪个位置>  插入  <什么元素>  :\n");
	 scanf("%d%d",&c,&e);
	 a=insert(L,c,e);
	 if(a>0)
	 {
	 	print(L);
	 }
	 else
	 {
	 	printf("操作不成功\n");
	 }
	 int b,d;
	 printf("请输入你要在链表删除的位置:\n");
	 scanf("%d",&d);
	 b=delete(L,d); 
	  if(b>0)
	 {
	 	print(L);
	 }
	 else
	 {
	 	printf("操作不成功\n");
	 }
   	 return 0;
}
