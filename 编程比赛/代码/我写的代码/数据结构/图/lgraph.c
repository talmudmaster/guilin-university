#define MAXVEX 100 

typedef int VType;

//�߽��
typedef struct ENode{
	int data;
	struct ENode *next;
}ENode; 

//������
typedef struct VNode{
	VType data;
	struct VNode *firstedge;
}VNode;

//�ڽӱ��ʾ��ͼ����
typedef struct LGraph{
	int vnum,edgenum;//������������
	VNode ADJList[MAXVEX];//
	 
};
 
