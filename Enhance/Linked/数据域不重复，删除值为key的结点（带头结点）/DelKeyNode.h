//数据域不重复，删除值为key的结点（带头结点） 

#include "Createlink.h"
ElemSN *head;

void Printlink (ElemSN *h)
{
	ElemSN *p;
	printf ("处理后的结果为：\n");
	for (p=h;p->next;p=p->next)
		printf ("%d\t",p->next->data);
}

void DelKeyNode (ElemSN *h,int key)
{
	ElemSN *p,*delp;
	for (p=h;p->next && p->next->data-key;p=p->next)
		;
	if (!p->next)
		printf("Not found!\n");
	else 
	{
		delp=p->next;
		p->next=delp->next;
		free(delp);
		delp=NULL; 
		//输出
		Printlink(head);
	}
}
