#define MAXVEX 100 

typedef int VType;

//边结点
typedef struct ENode{
	int data;
	struct ENode *next;
}ENode; 

//顶点结点
typedef struct VNode{
	VType data;
	struct VNode *firstedge;
}VNode;

//邻接表表示的图类型
typedef struct LGraph{
	int vnum,edgenum;//顶点数，边数
	VNode ADJList[MAXVEX];//
	 
};
 
