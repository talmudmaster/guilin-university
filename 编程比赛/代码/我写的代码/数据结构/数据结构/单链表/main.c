#include <stdio.h>
#include <stdlib.h>
#include "LNode.h" 
int main(int argc, char *argv[]) {
	//����������
	 List create();//���� 
	 void print(List L);//��� 
	 int search(List L,int i);//����
	 int delete(List L,int x);//ɾ��
	 int insert(List L,int i,int x);//���� 
	//�����ĵ���
	 List L;
	 L=create();
	 print(L);
	 int i,x;
	 printf("n\������Ҫ�ҵ���:\n");
	 scanf("%d",&i);
	 x=search(L,i);
	 if(x>0)
	 {
	 	printf("�ҵ���,���ڵ� %d ��λ��\n",x);
	 }
	 else
	 {
	 	printf("û�ҵ�\n");
	 }
	 int a,c,e;
	 printf("\n��������Ҫ������  <�ĸ�λ��>  ����  <ʲôԪ��>  :\n");
	 scanf("%d%d",&c,&e);
	 a=insert(L,c,e);
	 if(a>0)
	 {
	 	print(L);
	 }
	 else
	 {
	 	printf("�������ɹ�\n");
	 }
	 int b,d;
	 printf("��������Ҫ������ɾ����λ��:\n");
	 scanf("%d",&d);
	 b=delete(L,d); 
	  if(b>0)
	 {
	 	print(L);
	 }
	 else
	 {
	 	printf("�������ɹ�\n");
	 }
   	 return 0;
}
