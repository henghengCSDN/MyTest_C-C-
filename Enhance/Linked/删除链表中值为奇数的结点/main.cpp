#include <stdio.h>
#include <stdlib.h>
#define N 6

typedef struct node
{
	int data;
	struct node *next; 
}ElemSN;

ElemSN  *Createlink(int a[])
{
	int i;
	ElemSN *h=NULL,*tail,*p;
	for (i=0;i<N;i++)
	{
		p=(ElemSN *) malloc (sizeof (ElemSN));
		p->data=a[i];
		p->next=NULL;
		if (!h)
			h=tail=p;
		else
			tail=tail->next=p;
	}
	return h;
}

ElemSN * delnode (ElemSN *h)
{
	ElemSN *p,*q;
	int i;
	for (i=0;i<N;i++)
	{
		for (p=h;p && !((p->data)%2);q=p,p=p->next)
			;
		if(p)	 
		{
			if (p-h)
				q->next=p->next;
			else
				h=h->next;
			free(p);
			p=NULL;
		}
	} 
	
	return h;
}

int main ()
{
	int a[N];
	int i;
	ElemSN *head=NULL,*k;
	printf ("������%d������Ԫ�أ�\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	printf ("\n");
	//������
	head=Createlink(a);
	//��ʾ����������
	printf ("����������Ϊ��\n");
	for (k=head;k;k=k->next)
		printf ("%d\t",k->data);
	printf ("\n");
	printf ("ɾ��ֵΪ�����Ľ��������Ϊ��\n");
	//ɾ���������
	head=delnode(head); 
	for (k=head;k;k=k->next)
		printf ("%d\t",k->data);
} 
