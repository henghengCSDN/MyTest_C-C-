/****��head1��head2�������ǿ�����
	���������ظ����������У�����
	 head1��head2�ϳ�һ��������****/

#include <stdio.h> 
#include "fun.h"

int printflink (ElemSN *h)
{
	ElemSN *p;
	printf ("�������Ϊ��\n");
	for (p=h;p!=NULL;p=p->next)
		printf ("%d\t",p->data);
}


int main ()
{
	int a[N],b[M],i,key;
	ElemSN *head = NULL;
	ElemSN *head1 = NULL;
	ElemSN *head2 = NULL;
	printf("������(����1������)%d������\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	printf("������(����2������)%d������\n",M);
	for (i=0;i<M;i++)
		scanf ("%d",&b[i]);
	//���򴴽���������
	head1 = PreCreatelink1 (a);
	head2 = PreCreatelink2 (b);
	//���������� 
	head=fun(head1,head2); 
	//�����������
	printflink (head); 	
}
