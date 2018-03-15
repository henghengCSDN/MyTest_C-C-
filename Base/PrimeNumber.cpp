/*输出N以内的素数*/

#include <stdio.h>

#define N 1000

int main ()
{
	int i,j;
	for (i=2;i<N;i++)
	{
		for (j=2;j<i;j++)
			if (i%j==0)
				break;
		if(i==j)
			printf ("%d\t",i);
	}
	return 0;
} 
