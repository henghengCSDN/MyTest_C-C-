/*****计算13的N次幂*****/

#include <stdio.h>

#define N 1000

int main()
{
	int a[N];
	int s,i,j,x,cp,M;
	printf ("请输入指数大小：\n");
	scanf ("%d",&M);
	a[N-1]=1;
	s=N-2;
	for (i=1;i<M+1;i++)
	{
		cp=0;
		for (j=N-1;j>s;j--)
		{
			x=a[j]*13+cp;
			a[j]=x%10;
			cp=x/10;
		}
		/*a[s--]=cp;此处有可能溢出，需要处理*/ 
		
		//升华代码
		while (cp)
		{
			a[s--]=cp%10;
			cp=cp/10;
		}
		//升华代码
		
	}
	for (j=s+1;j<N;j++)
		printf ("%d",a[j]);
	return 0;
}
