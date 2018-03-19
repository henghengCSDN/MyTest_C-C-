#define N 6

typedef struct node
{
	int data;
	struct node *next;
} ElemSN;

ElemSN * Greatelink (int a[])
{
	int i;
	ElemSN *h,*t,*p;
	h=NULL;
	for (i=0;i<N;i++)
	{
		p=(ElemSN *) malloc (sizeof(ElemSN));
		p->data=a[i];
		if (!h)
		{
			p->next=p;
			h=t=p;
		}
		else 
		{
			p->next=h;
			t=t->next=p;
		}
	}
	return h;
}
