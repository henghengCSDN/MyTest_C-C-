#include <stdio.h>

#define N 4
#define M 6

int Minvalue(int a[][M])
{
	int max,min,i,j;
	//求每一行的最大值
	for (i = 0; i < N; i++)
	{
		max = a[i][0];
		for (j = 0; j < M;j++)
			if (a[i][j]>max)
				max = a[i][j]; 
		if (i==0 || max<min)
			min = max; 
	} 
	return min;
}

int main(void)
{
	int a[N][M], min,i,j;
	printf("请依次输入%d*%d二维数组每个元素：\n",N,M) ;
	//输入
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			scanf("%d", &a[i][j]);
	//输出格式
	printf("此二维数组为：\n") ;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	min = Minvalue(a);
	printf("\n"); 
	printf("每行最大值中的最小值min=%d。\n", min);
}
