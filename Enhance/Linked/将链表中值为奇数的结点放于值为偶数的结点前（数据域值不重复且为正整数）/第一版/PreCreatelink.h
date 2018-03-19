/*逆向创建单向链表*/

#include <stdlib.h>
#define N 8

typedef struct node 
{
	int data;
	struct node *next;
} ElemSN;

ElemSN * PreCreatelink (int a[])
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
