//�������ظ���ɾ��ֵΪkey�Ľ�㣨��ͷ��㣩 

#include "Createlink.h"
ElemSN *head;

void Printlink (ElemSN *h)
{
	ElemSN *p;
	printf ("�����Ľ��Ϊ��\n");
	for (p=h;p->next;p=p->next)
		printf ("%d\t",p->next->data);
}

void DelKeyNode (ElemSN *h,int key)
{
	ElemSN *p,*delp;
	for (p=h;p->next && p->next->data-key;p=p->next)
		;
	if (!p->next)
		printf("Not found!\n");
	else 
	{
		delp=p->next;
		p->next=delp->next;
		free(delp);
		delp=NULL; 
		//���
		Printlink(head);
	}
}
