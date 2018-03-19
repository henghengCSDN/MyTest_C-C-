/*****将链表中值为奇数的结点放于值为偶
     数的结点前（数据域值不重复且为正整数）****/

#include <stdlib.h>
#include "PreCreatelink.h"

ElemSN * Prelink (ElemSN *h)
{
	ElemSN * h1=NULL,*p,*q;
	h1=q=h;
	p=h->next;
	while (p)
	{
		if (p->data % 2)			//奇数 
		{
			q->next=p->next;
			p->next=h1;
			h1=p;
			p=q->next; 
		}
		else						//偶数联动 
		{
			q=p;
			p=p->next;
		}
	}
	return h1;
}
