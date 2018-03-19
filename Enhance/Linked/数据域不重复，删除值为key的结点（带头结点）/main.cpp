#include <stdio.h>
#include <stdlib.h>
#include "DelKeyNode.h"
 
int main ()
{
	int a[N];
	int i,key;
	printf ("请输入%d个链表元素：\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	//创建带头结点的单向链表
	head=Createlink(a);
	//删除值为key的结点 
	printf("请输入待删结点的值key：");
	scanf("%d",&key);
	DelKeyNode(head,key);	
} 
