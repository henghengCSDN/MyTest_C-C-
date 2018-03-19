/*逆向创建单向链表*/

#include <stdlib.h>
#define N 8
#define M 6

typedef struct node 
{
	int data;
	struct node *next;
} ElemSN;

//创建链表head1 
ElemSN * PreCreatelink1 (int a[])
{
	ElemSN *h,*newp;
	int i;
	h=NULL;
	for (i=N-1;i>=0;i--)
	{
		newp=(ElemSN *) malloc (sizeof (ElemSN));
		newp->data=a[i];
		newp->next=h;
		h=newp;
	}
	return h;
}

//创建链表head2
ElemSN * PreCreatelink2 (int b[])
{
	ElemSN *h,*newp;
	int i;
	h=NULL;
	for (i=M-1;i>=0;i--)
	{
		newp=(ElemSN *) malloc (sizeof (ElemSN));
		newp->data=b[i];
		newp->next=h;
		h=newp;
	}
	return h;
}
