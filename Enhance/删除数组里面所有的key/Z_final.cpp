#include <stdio.h>

#define N 8

int Dellkeynode (int a[],int n,int key)
{
	int i=0,j;
	for(i=j=0;i<n;i++)
	{
		if (a[i]-key)
			a[j++]=a[i];
	}
	return j;
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
