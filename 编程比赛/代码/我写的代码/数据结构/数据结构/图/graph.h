#include<stdio.h>
#define MAXVEX 100 
typedef int VertexType;
typedef int EdgeType;
struct MGraph{
	VertexType vertex[MAXVEX];	//顶点 
	EdgeType edge[MAXVEX][MAXVEX];	//边 
	int vexnum,edgenum;	//v，顶点数量：：e，边数量 
};
typedef struct MGraph MGraph;

//使用邻阶矩阵 创建图 
MGraph createMGraph(MGraph G){
	//输入顶点个数，边个数 
	printf("vexnum  =  ");
	scanf("%d",&G.vexnum); 
	printf("edgenum  =  ");
	scanf("%d",&G.edgenum);
	//输入顶点信息
	int i,j,k;
	printf("vertex:\n"); 
	for(i=0;i<G.vexnum;i++)
	{
		scanf("%d",&G.vertex[i]);
	}
	for(i=0;i<G.vexnum;i++)
		for(j=0;j<G.vexnum;j++)
			G.edge[i][j]=0;	//初始化 边 
	printf("edge:\n");
	for(k=0;k<G.edgenum;k++){//逐一输入边的信息
		scanf("%d%d",&i,&j); //输入有边的顶点i和j 
		G.edge[i][j]=1;
		//G.edge[j][i]=G.edge[j][i]; //只用于无向图 
	}		
	 return G; 
} 
int  visited[MAXVEX]={0}; 
//使用邻接矩阵存储的DFS算法 
void DFS(MGraph G,VertexType v){//从顶点v开始，访问图G 
	
	//visited数组是顶点是否被访问过 ，初始值0代表未被访问 
	
	visited[v]=1;//标记顶点v被访问，被访问值改为1
	printf("%5d",G.vertex[v]);//输出当前 被访问的顶点信息 
	int i;
	for(i=0;i<G.vexnum;i++){
		//顶点i和顶点v之间有边，且 顶点i没有被访问过 
		if((G.edge[v][i]==1)&&(visited[i]==0)){
			DFS(G,i);//递归调用，从下标为i的顶点开始继续DFS 
		} 
	}
}

void DFSTraversal(MGraph G){
	int i;
	for(i=0;i<G.vexnum;i++){
		if(visited[i]==0)
		DFS(G,i); 
	}
}

