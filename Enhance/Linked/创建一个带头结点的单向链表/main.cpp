/*����һ����ͷ���ĵ�������*/

#include <stdio.h>
#include <stdlib.h>
#include "Createlink.h"

void Printlink (ElemSN *h)
{
	ElemSN *p;
	printf ("�����Ľ��Ϊ��\n");
	for (p=h;p->next;p=p->next)
		printf ("%d\t",p->next->data);
} 

int main ()
{
	int a[N];
	ElemSN *head;
	int i;
	printf ("������%d������Ԫ�أ�\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	//������ͷ���ĵ�������
	head=Createlink(a);
	//���
	Printlink(head);	
} 
