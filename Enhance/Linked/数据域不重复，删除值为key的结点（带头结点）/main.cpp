#include <stdio.h>
#include <stdlib.h>
#include "DelKeyNode.h"
 
int main ()
{
	int a[N];
	int i,key;
	printf ("������%d������Ԫ�أ�\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	//������ͷ���ĵ�������
	head=Createlink(a);
	//ɾ��ֵΪkey�Ľ�� 
	printf("�������ɾ����ֵkey��");
	scanf("%d",&key);
	DelKeyNode(head,key);	
} 
