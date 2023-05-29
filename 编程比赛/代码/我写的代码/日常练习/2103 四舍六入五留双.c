#include<stdio.h>
int main(void)
{
    double x;
    int y;
    scanf("%lf",&x);
    scanf("%d",&y);
    printf("%.*f",y,x);
    return 0;

}