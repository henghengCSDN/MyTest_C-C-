/*����һ������ѭ������*/

#include <stdio.h>
#include <stdlib.h>
#include "Greatelink.h"

void Printlink (ElemSN *h)
{
	ElemSN *p;
	p=h;
	printf ("������Ϊ��\n");
	do
	{
		printf ("%d\t",p->data);
		p=p->next;
	}	
	while (p!=h);
} 

int main ()
{
	int a[N],i;
	//¼������
	printf("������%d������\n",N);
	for (i=0;i<N;i++)
	 	scanf("%d",&a[i]);
	ElemSN *head ;
	//��������ѭ������ 
	head =Greatelink(a);
	//�������ѭ������ 
	Printlink (head); 
}
