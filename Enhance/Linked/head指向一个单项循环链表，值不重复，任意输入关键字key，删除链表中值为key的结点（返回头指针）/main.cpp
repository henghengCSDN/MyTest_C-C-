/*����һ������ѭ������*/

#include <stdio.h>
#include <stdlib.h>
#include "Delkeynode.h"
int flag=0;			//����һ����־λ 

void Printlink (ElemSN *h)
{
	ElemSN *p;
	p=h;
	if (flag==0)
		printf ("����������Ϊ��\n");
	else
		printf ("����������Ϊ��\n");
	do
	{
		printf ("%d\t",p->data);
		p=p->next;
	}	
	while (p!=h);
} 

int main ()
{
	int a[N],i,key;
	//¼������
	printf("������%d������\n",N);
	for (i=0;i<N;i++)
	 	scanf("%d",&a[i]);
	ElemSN *head ;
	//��������ѭ������ 
	head =Greatelink(a);
	//�������ѭ������ 
	Printlink (head); 
	printf ("\n");
	//�����ɾ����ֵ
	printf ("�������ɾ�ڵ��ֵkey��");
	scanf ("%d",&key);
	printf ("\n"); 
	flag=1;
	//ɾ��ֵΪkey�Ľ�� 
	Delkeynode(head,key);
	//��������ĵ���ѭ������ 
	Printlink (head);
}
