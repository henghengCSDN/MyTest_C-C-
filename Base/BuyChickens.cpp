/*
	百钱买百鸡：
	公鸡一値钱五，母鸡一值钱3，小鸡三值钱一
	，百钱买百鸡，问公鸡，母鸡，小鸡各几何？
*/

#include <stdio.h>

int main ()
{
	int i,j,k;
	for (i=0;i<=100;i++)
		for (j=0;j<=100;j++)
			for (k=0;k<=100;k++)
				if (i+j+k==100 && 5*i+3*j+k/3==100 && k%3==0)
					printf ("公鸡=%d\t母鸡=%d\t小鸡=%d\n",i,j,k);
	return 0;
}
