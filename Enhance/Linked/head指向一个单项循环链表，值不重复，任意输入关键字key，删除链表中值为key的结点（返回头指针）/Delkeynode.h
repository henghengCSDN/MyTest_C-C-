#include "Greatelink.h"

ElemSN *Delkeynode (ElemSN *h,int key)
{
	ElemSN *p,*q;
	p=h;
	q=NULL;
	do
	{
		if (p->data-key)
		{
			q=p;
			p=p->next;
		}
		else
			break;
	}
	while (p-h);
	if (p==h && q)
		printf("Not found!");
	else
	{
		if (p==h)
		{
			for (q=h;q->next-h;q=q->next)
				;
			h=h->next;
		}
		q->next=p->next;
		free (p);
	}
	return h;
}

