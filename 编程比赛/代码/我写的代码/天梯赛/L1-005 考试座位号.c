#include <stdio.h>

struct student{
    char a[17];
    int b;
    int c;
}student[1005];

int main()
{
    int n,i,j,m,d[1005];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d %d",&student[i].a,&student[i].b,&student[i].c);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&d[i]);
        for(j=0;j<n;j++){
            if(d[i]==student[j].b){
                printf("%s %d\n",student[j].a,student[j].c);
                break;
            }
        }
    }
    return 0;
}
