#include "Createlink.h"
ElemSN *head;

void Prelink (ElemSN *h)
{
	ElemSN *p,*r;
	r=head->next;
	head->next=NULL;
	while (r)
	{
		p=r;
		r=r->next;
		p->next=head->next;
		head->next=p;
	}	
} 
