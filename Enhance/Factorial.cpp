/*****计算任意一个正整数的阶乘****/ 

#include <stdio.h>

#define N 1000

int main ()
{
	int a[N];
	int M,i,j,cp,x,s;
	printf("请输入一个正整数：\n");
	scanf ("%d",&M);
	a[N-1]=1;
	s=N-2;
	for (i=1;i<M+1;i++)
	{
		cp=0;
		for (j=N-1;j>s;j--)
		{
			x=a[j]*i+cp;
			a[j]=x%10;
			cp=x/10;
		}	
		while (cp)
		{
			a[s--]=cp%10;
			cp=cp/10;
		}
	}
	for (j=s+1;j<N;j++)
		printf ("%d",a[j]);
	return 0;
}

 
