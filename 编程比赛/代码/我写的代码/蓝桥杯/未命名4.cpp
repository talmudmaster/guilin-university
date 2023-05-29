#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	char a[n];
//	使用getchar()来读取一个字符（一次回车符号）
	getchar();
//	取入n长度的字符数组，并输出
	for(i=0;i<n;i++){
		scanf("%c",&a[i]);
//		printf("*");
	}
	for(i=0;i<n;i++){
		printf("%c",a[i]);
	}
//	printf("%c",a[2]);
	
	return 0;
}
