/*由于显示器大小原因限制，最多输出40行*/

#include <stdio.h>

int main ()
{
	int i,j,k,h;
	while (1)
	{
		printf ("请输入行数h：");
		scanf ("%d",&h);
		for (i=0;i<h;i++)
		{
			for (j=0;j<h-i-1;j++)
				printf (" ");
			for (k=0;k<2*i+1;k++)
				printf ("*");
			printf ("\n");
		}
	}
	return 0;
} 
