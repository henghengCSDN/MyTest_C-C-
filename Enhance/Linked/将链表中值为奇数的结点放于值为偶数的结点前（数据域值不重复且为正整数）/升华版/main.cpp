#include <stdio.h> 
#include "Prelink.h"

int printflink (ElemSN *h)
{
	ElemSN *p;
	printf ("�������Ϊ��\n");
	for (p=h;p!=NULL;p=p->next)
		printf ("%d\t",p->data);
}


int main ()
{
	int a[N],i,key;
	ElemSN *head = NULL;
	printf("������%d������\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	//���򴴽���������
	head = PreCreatelink (a);
	//���������� 
	head=Prelink (head); 
	//�����������
	printflink (head); 	
} 
