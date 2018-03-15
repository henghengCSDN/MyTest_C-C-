#include <stdlib.h>
#include "Createlink.h"

ElemSN * DelsingleNode (ElemSN *h,int key)
{
	ElemSN *p,*q;
	//查找待删结点
	for (p=h;p && p->data-key;q=p,p=p->next)
		;
	if (!p)
		printf ("Not found!");
	else 
		{
			if (p-h)
				q->next=p->next;
			else 
				h=h->next;
			free(p);
			p=NULL;
		}
		return h;
}
