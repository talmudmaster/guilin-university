#include<stdio.h>

int main(){
	double number; //����number��ʾ�������
	int zhengshu;   //��ʾʵ������������
	double xiaoshu;  //��ʾ������С������
	printf("������һ��ʵ����"); //��ʾ����һ����
	scanf("%lf",&number);
	zhengshu = (int)number;
	xiaoshu = number-zhengshu;
	printf("%f��������Ϊ��%d��С������Ϊ��%f \n",number,zhengshu,xiaoshu);
	
	return 0;
}
