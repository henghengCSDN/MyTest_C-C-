/*****��������ֵΪ�����Ľ�����ֵΪż
     ���Ľ��ǰ��������ֵ���ظ���Ϊ��������****/

#include <stdlib.h>
#include "PreCreatelink.h"

ElemSN * Prelink (ElemSN *h)
{
	ElemSN * h1=NULL,*p,*q;
	h1=q=h;
	p=h->next;
	while (p)
	{
		if (p->data % 2)			//���� 
		{
			q->next=p->next;
			p->next=h1;
			h1=p;
			p=q->next; 
		}
		else						//ż������ 
		{
			q=p;
			p=p->next;
		}
	}
	return h1;
}
