#include <stdio.h>

#define N 4
#define M 5
int main (void)
{
	int i,j,max,min;
	int a[N][M];
	/*****输入数据*****/ 
	printf ("请输入4 ×5矩阵中的每一个元素(每行输5个数，用空格隔开)：\n");
	for (i=0;i<N;i++)
		for (j=0;j<M;j++)
			scanf ("%d",a[i]+j);
	for (i=0;i<N;i++)
	{
		max=a[i][0];
		for (j=0;j<M;j++)
		{
			if (a[i][j]>max)
				max=a[i][j];
		}
		if (i==0)
			min=max;
		else
			if (max < min)
				min=max;
		printf ("第%d行最大值：%d\n",i+1,max);
	} 
	printf ("其中最小值为：%d\n",min);
	return 0;
}
