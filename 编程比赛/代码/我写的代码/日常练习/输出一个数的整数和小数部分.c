#include<stdio.h>

int main(){
	double number; //其中number表示输入的数
	int zhengshu;   //表示实数的整数部分
	double xiaoshu;  //表示整数的小数部分
	printf("请输入一个实数："); //提示输入一个数
	scanf("%lf",&number);
	zhengshu = (int)number;
	xiaoshu = number-zhengshu;
	printf("%f整数部分为：%d，小数部分为：%f \n",number,zhengshu,xiaoshu);
	
	return 0;
}
