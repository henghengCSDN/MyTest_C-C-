#include <stdio.h>       

//��������121   12321   53235������ 

int main ()
{
	while (1)
	{
		int m,n,t=0;
		scanf ("%d",&m);
		for (n=m;n>0;n/=10)      
			t=t*10+n%10;		 /*   �㷨����������   123 -->  321   */
			if (m==t)
				printf ("�����ǻ�������\n");
			else
				printf ("����ǻ�������\n");
	}
	return 0;
}
