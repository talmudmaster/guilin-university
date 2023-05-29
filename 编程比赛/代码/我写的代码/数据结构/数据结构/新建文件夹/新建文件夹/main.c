#include <stdio.h>
#include <stdlib.h>
#include "bitree.h"
int main(int argc, char *argv[]) {
	BiTree BT;	    //创建二叉树 
	BT=createBiTree(BT);	  //键入二叉树 
	printf("\n");
	firstTra(BT);	 //先序输出二叉树
	
	int depth=0;     //树的深度
	depth=depthBiTree(BT);  //调用函数求树的深度
	printf("\n\ndepth=%d\n",depth);
	
	int leaf=0;     //树的叶子数
	leaf=leafBiTree(BT);   //调用函数求叶子数
	printf("\nleaf=%d\n",leaf);
	return 0;
}

