/*****将链表中值为奇数的结点放于值为偶
     数的结点前（数据域值不重复且为正整数）****/

#include <stdlib.h>
#include "PreCreatelink.h"

ElemSN * Prelink (ElemSN *h)
{
	ElemSN * h1=NULL,*p,*q,*pk,*t;
	p=h;
	while (p)
	{
		if (p->data % 2)
		{
			pk=p;
			if (p==h)
				h=p=h->next;
			else 
			{
				q->next = p->next;
				p=q->next;
			}
			pk->next=h1;
			h1=pk;
		}
		else
		{
			q=p;
			p=p->next;
		}
	}
	for(t=h1;t->next;t=t->next)
		;
	t->next=h;
	return h1;
}
