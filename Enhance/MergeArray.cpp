#include <stdio.h>

#define M 6		//数组一容量
#define N 5		//数组二容量

int main ()
{
	int A[M]={2,4,8,9,11,13};
	int B[N]={3,5,7,10,12};
	int C[M+N];
	int i=0,j=0,k=0;
	while (i<M || j<N)
	{
		if (j==N || i<M && A[i]<B[j])
			C[k++]=A[i++];
		else 
			C[k++]=B[j++]; 
	}
	printf ("合并后的数组为：\n");
	for (i=0;i<k;i++)
		printf ("%d\t",C[i]);
	return 0;
}
