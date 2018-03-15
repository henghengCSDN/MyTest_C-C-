/*输出菲波拉契数列前20项*/

#include <stdio.h>
#define N 20 

int main ()
{
	int i,a1=1,a2=1;
	for (i=0;i<N;i++)
	{
		printf ("%d\t%d\t",a1,a2);
		a1=a1+a2;
		a2=a1+a2;
	}
	return 0;
}
