/*******************************************
  ����ElemSN�ɴ���һ��������NΪ����������
  hΪͷָ�룬����ʱ��һ��ָ��������գ��磺
  head=Createlink��a); 
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
