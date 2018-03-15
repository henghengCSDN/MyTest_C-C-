/*
	猴子吃桃：
		一天吃一半，还要多吃一个，
		第七天吃完，则偷桃几何？
*/

#include <stdio.h>    

int main ()
{
	int i,n=0;
	for (i=0;i<7;i++)
	{
		n=(n+1)*2;
	}
	printf ("个数=%d\n",n);
	return 0;
}