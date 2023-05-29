#include<iostream>
using namespace std;
int main()
{
	int i;
	char a[10];
//	string b;
//	scanf("%c",&a);
//	putchar(b);//字符
//	getchar();
//	gets();//字符串
//	puts(a);
	for(i=0;i<9;i++){
		scanf("%c",&a[i]);
	}
	for(i=0;i<9;i++){
		printf("%c",a[i]);
	}
	
}