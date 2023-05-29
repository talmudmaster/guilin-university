#include <stdio.h>
#define MAXSIZE 100

typedef struct{         
	int len;
	int elem[MAXSIZE];
}SqList;                
typedef int ElemType;    

void creatSqlist(SqList *L)
{
	int i; 
	for(i=0;i<(*L).len;i++)
	{
		scanf("%d",&L->elem[i]);
	}
}

int Search_Bin(SqList L,int key)
{
	int mid;
	int low=1; int high=L.len;    
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==L.elem[mid])
		  return mid;  
		else if(key<L.elem[mid]) 
		  high=mid-1;
		else low=mid+1;
	}
	return 0;
} 

int main()
{
	SqList L; 
	int i,m;    
	scanf("%d %d",&L.len,&m);
	creatSqlist(&L);	
	int a[MAXSIZE];
	for(i=0;i<m;i++)
	{
        scanf("%d",&a[i]);
		printf("%d",Search_Bin(L,a[i]));
		if(i!=m)
			printf(" ");
	}
	return 0;
}

