#include<stdio.h>

void input(int n);//����ѧ����ѧ�š���������ѧ�ɼ���������ɼ� 
void output(int n);//���ѧ����ѧ�š���������ѧ�ɼ���������ɼ�
void avg(int n);//���ÿ��ͬѧ��ƽ���� 
void pass(int n);//���ſγɼ��������ѧ������ 
void maxc(int n);//������ɼ���ߵ�ѧ�� 

struct st{
	int num;
	char name[20];
	float t1;
	float t2;
}s[30];

int main()
{
	int N;
	scanf("%d",&N);
	input(N);
	output(N);
	avg(N);
	pass(N);
	maxc(N);
	return 0;
}
void input(int n){//����ѧ����ѧ�š���������ѧ�ɼ���������ɼ� 
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&s[i].num);
		scanf("%s",s[i].name);
		scanf("%f",&s[i].t1);
		scanf("%f",&s[i].t2);
	}
}
 
void output(int n){//���ѧ����ѧ�š���������ѧ�ɼ���������ɼ� 
	int i;
	for(i=0;i<n;i++){
		printf("  %d  %s  %.2f  %.2f\n",s[i].num,s[i].name,s[i].t1,s[i].t2);
	}
}

void avg(int n){//���ÿ��ͬѧ��ƽ���� 
	int i;
	for(i=0;i<n;i++){
		printf(" %s��ƽ���� = %.2f\n",s[i].name,(s[i].t1+s[i].t2)/2);
	}
}

void pass(int n){//���ſγɼ��������ѧ������ 
	int i;
	for(i=0;i<n;i++){
		if(s[i].t1>=60&&s[i].t2>=60)
			printf("  pass: %s\n",s[i].name);
	}
}

void maxc(int n){//������ɼ���ߵ�ѧ�� 
	int i,j,maxc=0;
	for(i=0;i<n;i++){
		if(s[i].t2>maxc){
			maxc=s[i].t2;
			j=i;
		}
	}
	printf(" ������ɼ���ߵ��ǣ� %s��%.2f\n",s[j].name,s[j].t2);
}

