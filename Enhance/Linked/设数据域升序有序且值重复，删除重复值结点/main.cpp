#include <stdio.h> 
#include "DelSameNode.h"

int printflink (ElemSN *h)
{
	ElemSN *p;
	printf ("处理后结果为：\n");
	for (p=h;p!=NULL;p=p->next)
		printf ("%d\t",p->data);
}


int main ()
{
	int a[N],i,key;
	ElemSN *head = NULL;
	printf("请输入%d个数：\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	//正向创建单向链表
	head = Createlink (a);
	//删除重复结点 
	DelSameNode(head);
	//输出单向链表
	printflink (head); 	
} 
