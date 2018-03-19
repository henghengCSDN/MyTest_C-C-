/*创建一个单项循环链表*/

#include <stdio.h>
#include <stdlib.h>
#include "Greatelink.h"

void Printlink (ElemSN *h)
{
	ElemSN *p;
	p=h;
	printf ("链表结果为：\n");
	do
	{
		printf ("%d\t",p->data);
		p=p->next;
	}	
	while (p!=h);
} 

int main ()
{
	int a[N],i;
	//录入数据
	printf("请输入%d个数：\n",N);
	for (i=0;i<N;i++)
	 	scanf("%d",&a[i]);
	ElemSN *head ;
	//创建单项循环链表 
	head =Greatelink(a);
	//输出单项循环链表 
	Printlink (head); 
}
