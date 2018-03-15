#include <stdio.h>

int main ()
{
	int A[11]={0,0,3,2,0,7,0,0,9,0,0};
	int B[11];
	int i=0,k=0;
	for (i=0;i<11;)
	{
		if (A[i] != 0)
			B[k++]=A[i];
		i++;
	}
	printf ("去0后的数组为：\n");
	for (i=0;i<k;i++)
		printf ("%d\t",B[i]);
	return 0;
}
