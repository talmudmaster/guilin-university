#include <stdio.h>
#include <stdlib.h>
#include "bitree.h"
int main(int argc, char *argv[]) {
	BiTree BT;	    //���������� 
	BT=createBiTree(BT);	  //��������� 
	printf("\n");
	firstTra(BT);	 //�������������
	
	int depth=0;     //�������
	depth=depthBiTree(BT);  //���ú������������
	printf("\n\ndepth=%d\n",depth);
	
	int leaf=0;     //����Ҷ����
	leaf=leafBiTree(BT);   //���ú�����Ҷ����
	printf("\nleaf=%d\n",leaf);
	return 0;
}

