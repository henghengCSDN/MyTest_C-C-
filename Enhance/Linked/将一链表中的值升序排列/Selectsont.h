/*****��������ֵΪ�����Ľ�����ֵΪż
     ���Ľ��ǰ��������ֵ���ظ���Ϊ��������****/

/*��һ�����е�ֵ��������*/

#include <stdlib.h>
#include "PreCreatelink.h"

ElemSN * Selectsont (ElemSN *h)
{
	ElemSN * h1,*p,*q,*pm,*qm;
	h1=NULL;
	while (h)
	{
		for (q=pm=h,p=h->next;p;q=p,p=p->next)
			if (p->data > pm->data)
			{
				pm=p;
				qm=q;
			}
		if (pm-h)
			qm->next=pm->next;
		else
			h=h->next;
		pm->next=h1;
		h1=pm;
	}
	return h1;
}
