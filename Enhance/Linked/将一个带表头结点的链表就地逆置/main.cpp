/***head指向一个带头结点的单
非空向链表，将此链表就地逆置***/

#include <stdio.h>
#include <stdlib.h>
#include "Prelink.h"

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
	int i,key;
	printf ("请输入%d个链表元素：\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	//创建带头结点的单向链表
	head=Createlink(a);
	//就地逆置 
	Prelink(head); 
	//输出
	Printlink(head);	
} 


