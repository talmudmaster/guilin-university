#include<stdio.h> 
#include<malloc.h>
typedef int ElemType;
struct TreeNode{
	ElemType data;         //���Ľ��
	struct TreeNode *lift;     //����������
	struct TreeNode *right;	  //����������
};
typedef struct TreeNode TNode;
typedef struct TreeNode *BiTree;

//�������  ��� 
void firstTra(BiTree BT){
	if(BT){                   //�ж�BT ��Ϊ�� 
		printf("%d",BT->data);   //����� 
		firstTra(BT->lift);        //�ݹ���� ������ 
		firstTra(BT->right);      //�ݹ���� ������
	}
}

//�������  ��� 
void midTra(BiTree BT){
	if(BT){               //�ж�BT ��Ϊ�� 
		midTra(BT->lift);        //�ݹ���� ������ 
		printf("%d",BT->data);  //����� 
		midTra(BT->right);      //�ݹ���� ������
	}
}

//�������  ��� 
void endTra(BiTree BT){
	if(BT){              //�ж�BT ��Ϊ�� 
		endTra(BT->lift);       //�ݹ���� ������ 
		endTra(BT->right);     //�ݹ���� ������
		printf("%d",BT->data); //����� 
	}
}

//�������������������������˼�� 
BiTree createBiTree(BiTree BT){
	int x;
	scanf("%d",&x);
	if(x==0)          //�ж�x�Ƿ�Ϊ��
		BT=NULL;
	else{
		BT=(BiTree)malloc(sizeof(TNode));   //Ϊ�½������ռ�
		BT->data=x;        //��������� 
		BT->lift=createBiTree(BT->lift);      //�ݹ鴴�������� 
		BT->right=createBiTree(BT->right);  //�ݹ鴴�������� 
	}
} 

//���������ȣ��ݹ���� 
int depthBiTree(BiTree BT){
	int l=0,r=0;     //  l��ʾ��������ȣ�r��ʾ���������
	if(BT==NULL)  //�жϸ��Ƿ�Ϊ��
		return 0;
	else{
		l=depthBiTree(BT->lift);    //�ݹ���������������
		r=depthBiTree(BT->right);  //�ݹ���������������
	}
	if(l>r)          //�ж�����������������ֵ�ϴ���������+1
		return l+1;
	else
		return r+1;
} 

//���������Ҷ����������
int leafBiTree(BiTree BT){
	int l=0,r=0;          //  l��ʾ������Ҷ�ӣ�r��ʾ������Ҷ��
	if(BT==NULL)       //�жϸ��Ƿ�Ϊ��
		return 0;
	else if((BT->lift==NULL)&&(BT->right==NULL)){
		return 1;         //�ж����������Ƿ�Ϊ�գ�����Ϊ�շ���1
	}
	else{
		l=leafBiTree(BT->lift);    //�ݹ���ü���������Ҷ����
		r=leafBiTree(BT->right);  //�ݹ���ü���������Ҷ����
	}
	return l+r;    //��������Ҷ����֮��
}

