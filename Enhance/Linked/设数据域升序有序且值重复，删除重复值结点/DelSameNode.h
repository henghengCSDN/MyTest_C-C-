/*删除值重复的结点*/

#include <stdlib.h>
#include "Createlink.h"

void DelSameNode (ElemSN *h)
{
	ElemSN *p,*q;
	q=h;
	p=h->next;
	while (p)
	{
		if (p->data - q->data)
		{
			q=p;
			p=p->next;
		}
		else
		{
			q->next = p->next;
			free (p);
			p=q->next;
		}
	}
} 


