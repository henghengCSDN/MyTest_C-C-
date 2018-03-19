/*创建一个带头结点的单向链表*/

#include <stdio.h>
#include <stdlib.h>
#include "Createlink.h"

void Printlink (ElemSN *h)
{
	ElemSN *p;
	printf ("处理后的结果为：\n");
	for (p=h;p->next;p=p->next)
		printf ("%d\t",p->next->data);
} 

int main ()
{
	int a[N];
	ElemSN *head;
	int i;
	printf ("请输入%d个链表元素：\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	//创建带头结点的单向链表
	head=Createlink(a);
	//输出
	Printlink(head);	
} 
