#include <stdio.h>

#define M 6
#define N 5

int main ()
{
	int A[M]={2,4,8,9,10,13};
	int B[N]={3,4,7,10,12};
	int C[M+N];
	int i=0,j=0,k=0,t;
	while (i<M || j<N)
	{
		if(j==N || i<N && A[i]<B[j])
			t=A[i++];
		else 
			t=B[j++];
		if(k==0 || C[k-1] != t)
			C[k++]=t;
	}
	printf ("合并后的数组为：\n");
	for (i=0;i<k;i++)
		printf ("%d\t",C[i]);
	return 0;
}
