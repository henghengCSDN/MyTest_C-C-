#include <stdio.h>

int main ()
{
	int m,n,i;
	printf ("请输入一个自然数：\n");
	scanf ("%d",&m);
	if (m>0) 
	{
		n=m*m-m+1;
		printf ("结果为：%d=%d",m*m*m,n);
		for (i=0;i<m-1;i++)
		{
			n=n+2;
			printf("+%d",n);
		} 
	}
	else
		printf ("输入有误!");
	return 0;
} 
