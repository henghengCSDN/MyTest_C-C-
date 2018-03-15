/*将链表逆置*/

#include <stdlib.h>
#include "PreCreatelink.h"

ElemSN * Prelink (ElemSN *h)
{
	ElemSN * h1=NULL,*p;
	while (h)
	{
		p=h;
		h=h->next;
		p->next=h1;
		h1=p;
	}
	return h1;
}
