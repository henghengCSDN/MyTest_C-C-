/***********选择法排序**********/
/*选择一个非空单向链表升序排序*/

#include "PreCreatelink.h"

ElemSN *Selectsort (ElemSN *h)
{
	ElemSN *h1,*p,*q,*qmin,*pmin,*t;
	h1=NULL;
	while (h)
	{
		for (pmin=q=h,p=h->next;p;q=p,p=p->next)
			if (p->data < pmin->data)
			{
				pmin=p;
				qmin=q;
			}
			if (pmin-h)
				qmin->next=pmin->next;
			else 
				h=h->next;
			pmin->next=NULL;
			if (!h1)
				h1=t=pmin;
			else
				t=t->next=pmin;
	}
	return h1;
}
