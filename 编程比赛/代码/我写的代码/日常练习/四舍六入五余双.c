#include<stdio.h>
#include<math.h>
int main()
{
//	double f;
//	int d;
//	scanf("%lf %d",&f,&d);
//	f=(double)((int)(f*pow(10,d)+0.5))/pow(10,d);
//	printf("%.*f\n",d,f);
//	f=f*pow(10,d);
//	printf("%lf\n",f);
//	f=(int)f;
//	printf("%lf\n",f);
//	f=f/pow(10,d);
//	printf("%lf",f);
//	float zhengshu=(int)f;
//	printf("%f",zhengshu);
//1.2345 2
//1.2345*(10^2)=123.45
//123/(10^2)=1.23
	
//	1.123556789 4
//	11235.56789
//	11236
//	
//	1.1236
//	
//	1.12355 4
//	11235.5
//	0.5 0.5
//	前一个数字是偶数，不用变；是奇数，加一
	
//	int n;
//	float a=1.1234;
//	scanf("%d",&n);
//	printf("%.*f",n,a);//输出a的n位小数


//	1.123456789 4
//	11234.56789
//	0.56789 0.5


	double f,a;
	int d;
	scanf("%lf %d",&f,&d);
	f=f*pow(10,d);
	a=f-(int)f;
	if(a<0.5){
		//1.12345 3
		//1123.45
		//0.45<0.5
		//1123
		//1.123
		f=int(f);
		f=f/pow(10,d);
		printf("%.*lf",d,f);
	}else if(a==0.5){
		//1.1235 3
		//1123.5 f
		//0.5==0.5
		//判断一下3,取余2
		//1123+1=1124
		//1.124
//		int c=(int)f;
		if((int)f%2==0){
			f=int(f);
			f=f/pow(10,d);
			printf("%.*lf",d,f);
		}else{
			f=int(f)+1;
			f=f/pow(10,d);
			printf("%.*lf",d,f);
		}
	}else{//a>0.5,0.50001也算
		f=int(f)+1;
		f=f/pow(10,d);
		printf("%.*lf",d,f);
	}
	return 1;
}