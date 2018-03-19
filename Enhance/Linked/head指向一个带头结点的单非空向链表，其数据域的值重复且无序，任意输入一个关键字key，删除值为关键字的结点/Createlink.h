/*创建一个带头结点的单向链表*/

#define N 8

typedef struct node
{
	int data;
	struct node *next;
} ElemSN;

ElemSN * Createlink (int a[])
{
	ElemSN *h,*t;
	h= t=(ElemSN *) malloc (sizeof (ElemSN ));
	h->next=NULL;
	for (int i=0;i<N;i++)
	{
		t=t->next=(ElemSN *) malloc (sizeof (ElemSN));
		t->data=a[i];
		t->next=NULL;
	}
	return h;
}


