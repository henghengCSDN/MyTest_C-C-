/*
	有下列数列按升序排列存储到一位数组中，只存前20项
		2^n:2	4	8	16	32······	
	n={
		3^n:3	9	27	81	243·····				
*/

#include <stdio.h>

int main()
{
	int a[20];
	int i,n2=2,n3=3,j=0;
	for (i=0;i<20;i++)
	{
		if (n2<n3)
		{
			a[j++]=n2;				//<=>  a[j]=n2;   j++; 
			n2=n2*2;
		}
		else 
		{
			a[j++]=n3;
			n3=n3*3;
		}
	}
	for (i=0;i<20;i++)
		printf ("%d\t",a[i]);
	return 0;
} 
