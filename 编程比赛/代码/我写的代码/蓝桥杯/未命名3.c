#include<stdio.h>

int main()
{
    char a[10],b[10];
    char c,d;
    scanf("%s",a);
    printf("a中保存的字符串为：%s\n",a);

    c=getchar();
    printf("c中保存的字符为：%c ",c);

    gets(b);
    printf("b中保存的字符串为：%s\n",b);

    d=getchar();
    printf("d中保存的字符为：%c",d);

    return 0;
}