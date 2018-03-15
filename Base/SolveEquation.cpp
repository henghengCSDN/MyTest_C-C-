#include <stdio.h>
#include <math.h>

int main(void) 
{
	double x1,x2,a,b,c;
	while (1)
	{
		printf ("请分别输入标准形式下一元二次方程A,B,C的值：\n");
		scanf ("%lf%lf%lf",&a,&b,&c);
		if (a=0)
			printf ("此方程结果为：%lf\n",c/b);
		else 
			if (a!=0 && (b*b-4*a*c>0))
			{
				x1=(-b+sqrt(b*b-4*a*c))/(2*a);
				x2=(-b-sqrt(b*b-4*a*c))/(2*a);
				printf ("此方程结果为：x1=%lf,x2=%lf\n",x1,x2);
			}
		else 
			if (a!=0 && (b*b-4*a*c==0))
			{
				x1=(-b+sqrt(b*b-4*a*c))/(2*a);
				printf ("此方程结果为：x1=x2=%lf\n",x1);
			}
		else
			printf ("此方程无解！\n");
		printf ("\n");
	}
	return 0;
}