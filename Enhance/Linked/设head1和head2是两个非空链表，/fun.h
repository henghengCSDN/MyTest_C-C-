/****设head1和head2是两个非空链表，
	（数据域重复且升序排列），将
	 head1和head2合成一个升序链****/

#include <stdlib.h>
#include "PreCreatelink.h"

ElemSN * fun (ElemSN *head1,ElemSN *head2)
{
	ElemSN *h,*p,*t;
	h=NULL;
	while (head1 && head2)
	{
		if (head1->data < head2->data)
		{
			p=head1;
			head1=head1->next;
		}
		else 
		{
			p=head2;
			head2=head2->next;
		}
		p->next=NULL;
		if (!h)
			h=t=p;
		else
			t=t->next=p;
	}
	if(head1)
		p=head1;
	else
		p=head2;
	t->next=p;
	return h;
}

 
