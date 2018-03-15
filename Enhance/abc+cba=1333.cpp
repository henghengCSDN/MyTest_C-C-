#include <stdio.h>

int main ()
{
	int a,b=2,c;
	printf("满足abc+cba=1333的a,b,c的值的组合有：\n"); 
	for(a=4;a<10;a++)
		for(c=4;c<10;c++)
			if(a+c==13)
				printf ("a=%d,b=%d,c=%d\n",a,b,c);
	return 0;	
}
