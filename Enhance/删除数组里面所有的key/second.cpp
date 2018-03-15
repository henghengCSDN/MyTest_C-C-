#include <stdio.h>

#define N 8

int Dellkeynode (int a[],int n,int key)
{
	int i=0,j;
	while (1)
	{
		for (i=0;i<n && a[i]-key;i++)
			;
		if(i<n)
		{
			for (j=i;j<n-1;j++)
				a[j]=a[j+1];
			n--;
		}
		else
			break;
	}
	return n;
}

int main ()
{
	int a[N];
	int key,i,n=8;
	printf ("请输入容量为%d的数组：\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	printf ("关键字：\n");
	scanf ("%d",&key);
	n=Dellkeynode(a,N,key);
	for (i=0;i<n;i++)
	{
		printf ("%d\t",a[i]);
	}
}
