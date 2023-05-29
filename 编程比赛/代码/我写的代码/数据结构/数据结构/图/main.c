#include <stdio.h>
#include <stdlib.h>
#include"graph.h"
int main(int argc, char *argv[]) {
	int x;
	printf("请选择以下操作:1 *DFS* or 2 *DFSTraversal*\n");
	scanf("%d",&x); 
	MGraph G;
	G=createMGraph(G);
	if(x==1) 
		DFS(G,0);
	else if(x==2)
		DFSTraversal(G);
	
	return 0;
}

