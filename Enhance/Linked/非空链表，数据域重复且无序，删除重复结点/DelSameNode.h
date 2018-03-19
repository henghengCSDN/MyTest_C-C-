/*删除值重复的结点*/

#include <stdlib.h>
#include "Createlink.h"

void DelSameNode (ElemSN *h)
{
	ElemSN *p,*q,*pkey;
	pkey=h;
	while (pkey)
	{
		q=pkey;
		p=pkey->next;
		while(p)
		{
			if (p->data - pkey->data)
			{
				q=p;
				p=q->next;
			}
			else
			{
				q->next = p->next;
				free (p);
			}
		}
		pkey=pkey->next;
	}
} 


