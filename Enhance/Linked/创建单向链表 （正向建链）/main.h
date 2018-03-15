#include <stdio.h>
#include <stdlib.h>

#define N 6

typedef struct node  
{
	int data;
	struct node *next;
} ElemSN;

ElemSN * Creatlink (int a[])
{
	ElemSN *h,*tail,*p;
	//创建头结点
	h=tail=(ElemSN *) malloc (sizeof (ElemSN));
	h->data=a[0];
	h->next=NULL;
	for (int i=1;i<N;i++)
	{
		p=(ElemSN *) malloc (sizeof (ElemSN));
		p->data=a[i];
		p->next=NULL;
		tail->next=p;
		tail=p;
	}  
	return h;
}

Printlink (ElemSN *h)
{
	ElemSN *p;
	for (p=h;p!=NULL;p=p->next)
		printf ("%d\t",p->data);
}

