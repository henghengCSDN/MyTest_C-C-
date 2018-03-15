#include <stdlib.h>
#include "Createlink.h"

ElemSN *DelMaxNode (ElemSN *h)
{
	ElemSN *p,*q,*pmax,*qmax=NULL;
	pmax=h;
	for (q=h,p=h->next;p;q=p,p=p->next)
	{
		if (p->data > pmax->data)
		{
			pmax=p;
			qmax=q;
		}
	}
		if(pmax-h)
			qmax->next=pmax->next;
		else 
			h=h->next;
		free (pmax);
		return h;
} 
