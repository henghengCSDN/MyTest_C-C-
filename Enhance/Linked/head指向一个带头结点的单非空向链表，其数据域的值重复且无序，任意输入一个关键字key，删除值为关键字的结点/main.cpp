/***head指向一个带头结点的单非空向链表，
  其数据域的值重复且无序，任意输入一个
	关键字key，删除值为关键字的结点***/

#include <stdio.h>
#include <stdlib.h>
#include "DelSameNode.h"

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
	int i,key;
	printf ("请输入%d个链表元素：\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("请输入要删结点的值key：\n");
	scanf("%d",&key);
	//创建带头结点的单向链表
	head=Createlink(a);
	//删除值为key的结点
	DelSameNode(head,key); 
	//输出
	Printlink(head);	
} 


