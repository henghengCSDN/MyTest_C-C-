/*可将最大值所在的结点插入尾结点*/

#include <stdlib.h>
#include "Createlink.h"

ElemSN *MoveMaxNodeToTail(ElemSN *h)
{
	ElemSN *p,*q,*pmax,*qmax=NULL;
	pmax=h;
	for(q=h,p=h->next;p;q=p,p=p->next)
	{
		if(p->data>pmax->data)
		{
			pmax=p;
			qmax=q;
		}
	}
	if(pmax->next)
	{
	    if(pmax-h)
	      qmax->next=pmax->next;
	    else
	      h=h->next;
	    pmax->next=q->next;
	    q->next=pmax;
	}
	return h;
} 
