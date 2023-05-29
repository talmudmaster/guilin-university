#include<stdio.h>
#define MAXVEX 100 
typedef int VertexType;
typedef int EdgeType;
struct MGraph{
	VertexType vertex[MAXVEX];	//���� 
	EdgeType edge[MAXVEX][MAXVEX];	//�� 
	int vexnum,edgenum;	//v��������������e�������� 
};
typedef struct MGraph MGraph;

//ʹ���ڽ׾��� ����ͼ 
MGraph createMGraph(MGraph G){
	//���붥��������߸��� 
	printf("vexnum  =  ");
	scanf("%d",&G.vexnum); 
	printf("edgenum  =  ");
	scanf("%d",&G.edgenum);
	//���붥����Ϣ
	int i,j,k;
	printf("vertex:\n"); 
	for(i=0;i<G.vexnum;i++)
	{
		scanf("%d",&G.vertex[i]);
	}
	for(i=0;i<G.vexnum;i++)
		for(j=0;j<G.vexnum;j++)
			G.edge[i][j]=0;	//��ʼ�� �� 
	printf("edge:\n");
	for(k=0;k<G.edgenum;k++){//��һ����ߵ���Ϣ
		scanf("%d%d",&i,&j); //�����бߵĶ���i��j 
		G.edge[i][j]=1;
		//G.edge[j][i]=G.edge[j][i]; //ֻ��������ͼ 
	}		
	 return G; 
} 
int  visited[MAXVEX]={0}; 
//ʹ���ڽӾ���洢��DFS�㷨 
void DFS(MGraph G,VertexType v){//�Ӷ���v��ʼ������ͼG 
	
	//visited�����Ƕ����Ƿ񱻷��ʹ� ����ʼֵ0����δ������ 
	
	visited[v]=1;//��Ƕ���v�����ʣ�������ֵ��Ϊ1
	printf("%5d",G.vertex[v]);//�����ǰ �����ʵĶ�����Ϣ 
	int i;
	for(i=0;i<G.vexnum;i++){
		//����i�Ͷ���v֮���бߣ��� ����iû�б����ʹ� 
		if((G.edge[v][i]==1)&&(visited[i]==0)){
			DFS(G,i);//�ݹ���ã����±�Ϊi�Ķ��㿪ʼ����DFS 
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

