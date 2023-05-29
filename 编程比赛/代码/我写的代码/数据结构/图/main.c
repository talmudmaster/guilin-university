#include <stdio.h>
#include <stdlib.h>
#include "mgraph.h" 

int main(int argc, char *argv[]) {
	MGraph G;
	G=createMGraph(G);
	DFS(G,0);
	return 0;
}
