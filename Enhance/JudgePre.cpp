#include <stdio.h>
#include <string.h> 

int main ()
{
	char s[8];
	int t=0,i;
	printf("请输入一个9位以内的正整数；\n");
	gets(s);
	printf("此数据是%d位数。\n",strlen(s));
	printf ("这个数逆序为；\n");
	for(i=strlen(s);i>=0;i--)
		printf("%c",s[i-1]);
	return 0;	
}
