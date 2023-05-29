#include<stdio.h>

void input(int n);//输入学生的学号、姓名、数学成绩、计算机成绩 
void output(int n);//输出学生的学号、姓名、数学成绩、计算机成绩
void avg(int n);//输出每个同学的平均分 
void pass(int n);//两门课成绩都及格的学生人数 
void maxc(int n);//计算机成绩最高的学生 

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
void input(int n){//输入学生的学号、姓名、数学成绩、计算机成绩 
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&s[i].num);
		scanf("%s",s[i].name);
		scanf("%f",&s[i].t1);
		scanf("%f",&s[i].t2);
	}
}
 
void output(int n){//输出学生的学号、姓名、数学成绩、计算机成绩 
	int i;
	for(i=0;i<n;i++){
		printf("  %d  %s  %.2f  %.2f\n",s[i].num,s[i].name,s[i].t1,s[i].t2);
	}
}

void avg(int n){//输出每个同学的平均分 
	int i;
	for(i=0;i<n;i++){
		printf(" %s的平均分 = %.2f\n",s[i].name,(s[i].t1+s[i].t2)/2);
	}
}

void pass(int n){//两门课成绩都及格的学生人数 
	int i;
	for(i=0;i<n;i++){
		if(s[i].t1>=60&&s[i].t2>=60)
			printf("  pass: %s\n",s[i].name);
	}
}

void maxc(int n){//计算机成绩最高的学生 
	int i,j,maxc=0;
	for(i=0;i<n;i++){
		if(s[i].t2>maxc){
			maxc=s[i].t2;
			j=i;
		}
	}
	printf(" 计算机成绩最高的是： %s的%.2f\n",s[j].name,s[j].t2);
}

