#include <stdio.h>

int main ()
{
	int i,y,j,k,N,l=0;
	printf ("请输入一个正整数：\n");
	scanf ("%d",&N);
	if (N>=1)
		l++;
	for (i=2;i<=N;i++)
	{
		y=i/100;		//百位 
		j=i/10;			//十位 
		k=i%10;			//个位 
		if(y==1)
			l++;
		if(j==1)
			l++;
		if (k==1)
			l++; 
	}
	printf ("数字1的个数为：%d.\n",l); 
	return 0;
 } 
