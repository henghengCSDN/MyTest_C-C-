#include <stdio.h>       

//回文数：121   12321   53235··· 

int main ()
{
	while (1)
	{
		int m,n,t=0;
		scanf ("%d",&m);
		for (n=m;n>0;n/=10)      
			t=t*10+n%10;		 /*   算法：逆置数据   123 -->  321   */
			if (m==t)
				printf ("此数是回文数！\n");
			else
				printf ("此书非回文数！\n");
	}
	return 0;
}
