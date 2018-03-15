/*可将最大值所在的结点插入头结点*/

#include <stdlib.h>
#include "Createlink.h"

ElemSN *MoveMaxNodeToHead(ElemSN *h)
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
	if(pmax-h)
	{
		qmax->next=pmax->next;
		pmax->next=h;
		h=pmax;
	}
	return h;
} 
