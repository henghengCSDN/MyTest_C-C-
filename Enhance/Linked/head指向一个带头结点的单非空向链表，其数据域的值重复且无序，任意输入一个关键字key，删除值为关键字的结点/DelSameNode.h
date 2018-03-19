#include "Createlink.h"

void DelSameNode (ElemSN *h,int key)
{
	ElemSN *p,*delp;
	for(p=h;p->next;)
	{
		if (p->next->data - key)
			p=p->next;
		else 
		{
			delp=p->next;
			p->next=delp->next;
			free(delp);
		}
	}	
} 
