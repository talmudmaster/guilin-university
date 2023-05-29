#include<stdio.h>
#include<math.h>
int main()
{
	double f,a;
	int d,F;
	scanf("%lf %d",&f,&d);
	f=f*pow(10,d);
	a=f-(int)f;
	if(a<0.5){
//		F=(int)f;
//		f=(double)F;
//		f=f/pow(10,d);
		printf("%.*lf",d,(int)f/pow(10,d));
	}else if(a==0.5){
		if((int)f%2==0){
//			F=(int)f;
//			f=(double)F;
//			f=f/pow(10,d);
			printf("%.*lf",d,(int)f/pow(10,d));
		}else{
//			F=(int)f+1;
//			f=(double)F;
//			f=f/pow(10,d);
			printf("%.*lf",d,((int)f+1)/pow(10,d));
		}
	}else{//a>0.5,0.50001也算
//		F=(int)f+1;
//		f=(double)F;
//		f=f/pow(10,d);
		printf("%.*lf",d,((int)f+1)/pow(10,d));
	}
	return 0;
}