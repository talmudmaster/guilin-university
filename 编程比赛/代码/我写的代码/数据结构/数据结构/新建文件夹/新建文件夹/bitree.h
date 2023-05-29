#include<stdio.h> 
#include<malloc.h>
typedef int ElemType;
struct TreeNode{
	ElemType data;         //树的结点
	struct TreeNode *lift;     //树的左子树
	struct TreeNode *right;	  //树的右子树
};
typedef struct TreeNode TNode;
typedef struct TreeNode *BiTree;

//先序遍历  输出 
void firstTra(BiTree BT){
	if(BT){                   //判断BT 不为空 
		printf("%d",BT->data);   //输出根 
		firstTra(BT->lift);        //递归遍历 左子树 
		firstTra(BT->right);      //递归遍历 右子树
	}
}

//中序遍历  输出 
void midTra(BiTree BT){
	if(BT){               //判断BT 不为空 
		midTra(BT->lift);        //递归遍历 左子树 
		printf("%d",BT->data);  //输出根 
		midTra(BT->right);      //递归遍历 右子树
	}
}

//后序遍历  输出 
void endTra(BiTree BT){
	if(BT){              //判断BT 不为空 
		endTra(BT->lift);       //递归遍历 左子树 
		endTra(BT->right);     //递归遍历 右子树
		printf("%d",BT->data); //输出根 
	}
}

//创建二叉树，利用先序遍历的思想 
BiTree createBiTree(BiTree BT){
	int x;
	scanf("%d",&x);
	if(x==0)          //判断x是否为空
		BT=NULL;
	else{
		BT=(BiTree)malloc(sizeof(TNode));   //为新结点申请空间
		BT->data=x;        //创建根结点 
		BT->lift=createBiTree(BT->lift);      //递归创建左子树 
		BT->right=createBiTree(BT->right);  //递归创建右子树 
	}
} 

//求二叉树深度，递归遍历 
int depthBiTree(BiTree BT){
	int l=0,r=0;     //  l表示左子树深度，r表示右子树深度
	if(BT==NULL)  //判断根是否为空
		return 0;
	else{
		l=depthBiTree(BT->lift);    //递归计算左子树的深度
		r=depthBiTree(BT->right);  //递归计算右子树的深度
	}
	if(l>r)          //判断左右子树，返回数值较大的子树深度+1
		return l+1;
	else
		return r+1;
} 

//求二叉树的叶子数，遍历
int leafBiTree(BiTree BT){
	int l=0,r=0;          //  l表示左子树叶子，r表示右子树叶子
	if(BT==NULL)       //判断根是否为空
		return 0;
	else if((BT->lift==NULL)&&(BT->right==NULL)){
		return 1;         //判断左右子树是否为空，若都为空返回1
	}
	else{
		l=leafBiTree(BT->lift);    //递归调用计算左子树叶子数
		r=leafBiTree(BT->right);  //递归调用计算右子树叶子数
	}
	return l+r;    //返回左右叶子数之和
}

