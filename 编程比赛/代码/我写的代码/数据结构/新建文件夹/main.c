#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

int main(int argc, char *argv[]) {
	void createSq(SqList *L);// ����˳��� 
	void printSq(SqList L); //���˳���
	void insertSq(SqList *L,int location,int x);// ����һ��Ԫ�ص�˳����locationλ��
	void outSq(SqList *L,int location);// ��˳����Locationλ�Äh��һ��Ԫ��
	int xunzhao(SqList L,int sf);// ˳�����һ��Ԫ��
	int ercz(SqList L,int er);//���֖���һ��Ԫ��

	SqList L;
	createSq(&L);//����˳��� 
	printSq(L);//���˳��� 
	
	printf("\n�������λ�ü��������:");
	int lon,x;
	scanf("%d%d",&lon,&x);
	insertSq(&L, lon,x);//��ָ��λ�ò���ָ��Ԫ�� 
	printSq(L);
	
	printf("\n����ɾ��λ��: ");
	int sc;
	scanf("%d",&sc);
	outSq(&L,sc);//�h��ָ��λ�õ�Ԫ��
	printSq(L);
	
	printf("\n˳�����>������Ҫ���ҵ�����"); 
	int sf;
	scanf("%d",&sf);
	int xz=0;
	xz=xunzhao(L,sf); //���ֲ���ָ��Ԫ�� 
	if(xz>0){
		printf("�ҵ��ˣ��ڵ�%d��",xz);
	} else{
		printf("û�ҵ�");
	}
	
	printf("\n���ֲ���>������Ҫ���ҵ�����");
	int er;
	scanf("%d",&er);
	int et=0;
	et=xunzhao(L,er); //���ֲ���ָ��Ԫ�� 
	if(et>0){
		printf("�ҵ��ˣ��ڵ�%d��",et);
	} else{
		printf("û�ҵ�");
	}
	return 0;
}
	
	
	



