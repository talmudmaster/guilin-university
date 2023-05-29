 #include <stdio.h>
int main()
{
    int a;
    int b[100];
    int i;
    scanf("%d",&a);
    if(a<0)
    {
         printf("fu ");
         a=-a;
    }
    for(i=0;a>0;i++)
    {
        b[i]=a%10;
        a=a/10;
    }
    i--;
    while(i>0)
    {
        switch(b[i--]){
            case 0: printf("ling ");break;
            case 1: printf("yi ");break;
            case 2: printf("er ");break;
            case 3: printf("san ");break;
            case 4: printf("si ");break;
            case 5: printf("wu ");break;
            case 6: printf("liu ");break;
            case 7: printf("qi ");break;
            case 8: printf("ba ");break;
            case 9: printf("jiu ");break;
        }
    }
    switch(b[i]){
            case 0: printf("ling");break;
            case 1: printf("yi");break;
            case 2: printf("er");break;
            case 3: printf("san");break;
            case 4: printf("si");break;
            case 5: printf("wu");break;
            case 6: printf("liu");break;
            case 7: printf("qi");break;
            case 8: printf("ba");break;
            case 9: printf("jiu");break;
        }
    return 0;
}
















//Ã°ÅÝ 
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];a[i]=a[j];a[j]=t;
		}
	}
}
//Ñ¡Ôñ 
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];a[i]=a[j];a[j]=t;
		}
	}
}

