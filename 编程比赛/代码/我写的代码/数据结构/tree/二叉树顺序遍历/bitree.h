//˳��洢 
//�����������ʺ�˳��洢 
//��ʽ�洢 

typedef char ElemType;

struct BNode{//��������� 
	ElemType data;//���ݱ��� 
	struct BNode *left;//������ 
	struct BNode *right;//������ 
};

typedef struct BNode BNode;
typedef struct BNode* BiTree;

void PreOrderTraversal(BiTree T){//������� 
	if(T!=NULL){//�ǿ��� 
		printf("%d",T->data);//��������
		PreOrderTraversal(T->left);//���������� 
		PreOrderTraversal(T->right);//���������� 
	}
}

void InOrderTraversal(BiTree T){//������� 
	if(T!=NULL){//�ǿ��� 
		PreOrderTraversal(T->left);//����������
		printf("%d",T->data);//��������
		PreOrderTraversal(T->right);//���������� 
	}
}

void LOrderTraversal(BiTree T){//������� 
	if(T!=NULL){//�ǿ��� 
		PreOrderTraversal(T->left);//����������
		PreOrderTraversal(T->right);//����������
		printf("%d",T->data);//��������
	}
}

BiTree createBiTree(BiTree T){
	char x;
	scanf("%c",&x);
	if(x=='#'){
		T=NULL;
	}else{
		//�������� 
		T=(BiTree)malloc(sizeof(BNode));
		T->data=x;
		//������������������ 
		T->left=createBiTree(T->left);
		T->right=createBiTree(T->right);
	}
	return T;
}

