/*打印9*9乘法表*/
#include <stdio.h>

int main ()
{
	int i,j;
	for (i=1;i<10;i++)
		printf ("%d\t",i);
	printf ("\n");
	for (i=1;i<66;i++)
		printf ("-");
	printf ("\n");
	for (i=1;i<10;i++)
	{
		for (j=1;j<10;j++)
			if (i>=j)
				printf ("%d*%d=%d\t",j,i,i*j);
		printf ("\n");
	}
}