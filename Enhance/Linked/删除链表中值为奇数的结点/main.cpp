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
	printf ("请输入%d个数组元素：\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	printf ("\n");
	//正向建链
	head=Createlink(a);
	//显示创建的链表
	printf ("创建的链表为：\n");
	for (k=head;k;k=k->next)
		printf ("%d\t",k->data);
	printf ("\n");
	printf ("删除值为奇数的结点后的链表为：\n");
	//删除奇数结点
	head=delnode(head); 
	for (k=head;k;k=k->next)
		printf ("%d\t",k->data);
} 
