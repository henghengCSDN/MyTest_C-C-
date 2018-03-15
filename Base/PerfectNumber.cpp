/*
	完数：
		各因子之和等于原数（不包括原数）；如：6=1+2+3   
*/

#include <stdio.h>

int main ()
{
	int i,j,sum;
	for (i=6;i<1000;i++)
	{
		sum=0;          //累加和清零
		for (j=1;j<i;j++)      //寻找因子
			if (i%j==0)
				sum+=j;        //因子之和
		if (i==sum)
			printf ("%d\t",sum); 
	}
	return 0;
} 
