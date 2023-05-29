#include <stdio.h>

#define MAXN 20

int Delete( int A[], int L, int minA, int maxA );

int main()
{
    int A[MAXN], L, minA, maxA, i;

    scanf("%d", &L);
    for (i=0; i<L; i++) scanf("%d", &A[i]);
    scanf("%d %d", &minA, &maxA);
    L = Delete(A, L, minA, maxA);
    for (i=0; i<L; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}

int Delete( int A[], int L, int minA, int maxA ){
    int i,j=0,B[1005];
    for(i=0; i<L; i++){
    	if(A[i]<=minA||A[i]>=maxA){
    		B[j]=A[i];
    		j++;
        }
    }
    for(i=0; i<j; i++){
    	A[i]=B[i];
    }
    return j;
}
