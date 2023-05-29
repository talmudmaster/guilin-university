#define MAXVEX 100
typedef int VertexType;
typedef int EdgeType;

struct MGraph{
	VertexType vertex[MAXVEX];
	EdgeType edge[MAXVEX][MAXVEX];
	int vexnum,edgenum;
};
typedef struct MGraph MGraph;

MGraph createMGraph(MGraph G)
{
	printf("vernum = ");
	scanf("%d",&G.vexnum);
	printf("edgenum = ");
	scanf("%d",&G.edgenum);
	int i,j,k;
	printf("vertex:\n");
	for(i=0;i<G.vexnum;i++)
	{
		scanf("%d",&G.vertex[i]);
	}
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;i++)
		{
			G.edge[i][j]=0;
		}
	}
	printf("edge:\n");
	
	for(k=0;k<G.edgenum;k++)
	{
		scanf("%d%d",&i,&j);
		G.edge[i][j]=1;
		G.edge[j][i]=G.edge[i][j];
	}
	return G;
}


int visited[MAXVEX]={0};
void DFS(MGraph G, VertexType v)
{
	visited[v]=1;
	printf("%5d",G.vertex[v]);
	int i;
	for(i=0;i<G.vexnum;i++)
	{
		
	}
	
}
