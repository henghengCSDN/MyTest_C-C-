/***headָ��һ����ͷ���ĵ��ǿ�������
  ���������ֵ�ظ���������������һ��
	�ؼ���key��ɾ��ֵΪ�ؼ��ֵĽ��***/

#include <stdio.h>
#include <stdlib.h>
#include "DelSameNode.h"

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
	int i,key;
	printf ("������%d������Ԫ�أ�\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("������Ҫɾ����ֵkey��\n");
	scanf("%d",&key);
	//������ͷ���ĵ�������
	head=Createlink(a);
	//ɾ��ֵΪkey�Ľ��
	DelSameNode(head,key); 
	//���
	Printlink(head);	
} 


