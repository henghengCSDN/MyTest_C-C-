#include <stdio.h>

int main ()
{
	int x,y,k;
	printf ("请分别输入两个正整数x和y：");
	scanf ("%d%d",&x,&y);
	if(x<y)
		k=x;
	else
		k=y;
	for(;k>0;k--)
		if(x%k==0 && y%k==0)
			break;
	printf("公约数为：%d",k);
 } 
