//顺序存储 
//并非所有树适合顺序存储 
//链式存储 

typedef char ElemType;

struct BNode{//二叉树结点 
	ElemType data;//数据本身 
	struct BNode *left;//左子树 
	struct BNode *right;//右子树 
};

typedef struct BNode BNode;
typedef struct BNode* BiTree;

void PreOrderTraversal(BiTree T){//先序遍历 
	if(T!=NULL){//非空树 
		printf("%d",T->data);//输出根结点
		PreOrderTraversal(T->left);//遍历左子树 
		PreOrderTraversal(T->right);//遍历右子树 
	}
}

void InOrderTraversal(BiTree T){//中序遍历 
	if(T!=NULL){//非空树 
		PreOrderTraversal(T->left);//遍历左子树
		printf("%d",T->data);//输出根结点
		PreOrderTraversal(T->right);//遍历右子树 
	}
}

void LOrderTraversal(BiTree T){//后序遍历 
	if(T!=NULL){//非空树 
		PreOrderTraversal(T->left);//遍历左子树
		PreOrderTraversal(T->right);//遍历右子树
		printf("%d",T->data);//输出根结点
	}
}

BiTree createBiTree(BiTree T){
	char x;
	scanf("%c",&x);
	if(x=='#'){
		T=NULL;
	}else{
		//构造根结点 
		T=(BiTree)malloc(sizeof(BNode));
		T->data=x;
		//构造左子树，右子树 
		T->left=createBiTree(T->left);
		T->right=createBiTree(T->right);
	}
	return T;
}

