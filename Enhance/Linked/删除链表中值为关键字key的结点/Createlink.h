/*******************************************
  函数ElemSN可创建一个单链表，N为数组容量，
  h为头指针，调用时用一个指针变量接收，如：
  head=Createlink（a); 
*******************************************/

#include <stdlib.h> 
#define N 6

typedef struct node
{
	int data;
	struct node *next;
}ElemSN;

ElemSN *Createlink (int a[])
{
	ElemSN *h=NULL,*tail,*p;
	for (int i=0;i<N;i++)
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
