#include<stdio.h>

int fun(year)
{
	if ((year%4==0&&year%100!=0) || year%400==0)
        return 366;
    return 365;
}  
    
int main()
{
	int i,min,day = 0;
	for (i=1922;i<2021;i++)
	    day += fun(i);
	// 1921.7.23 到 2020.7.23的天数
	// 再减22天(7.1-7.23的天数)
	day = day - 22;
	min = day * 24 * 60;
	printf("%d",min);
}

