/***headָ��һ����ͷ���ĵ�
�ǿ���������������͵�����***/

#include <stdio.h>
#include <stdlib.h>
#include "Prelink.h"

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
	int i,key;
	printf ("������%d������Ԫ�أ�\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	//������ͷ���ĵ�������
	head=Createlink(a);
	//�͵����� 
	Prelink(head); 
	//���
	Printlink(head);	
} 


