/*创建一个单项循环链表*/

#include <stdio.h>
#include <stdlib.h>
#include "Delkeynode.h"
int flag=0;			//定义一个标志位 

void Printlink (ElemSN *h)
{
	ElemSN *p;
	p=h;
	if (flag==0)
		printf ("创建的链表为：\n");
	else
		printf ("处理后的链表为：\n");
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
	//录入数据
	printf("请输入%d个数：\n",N);
	for (i=0;i<N;i++)
	 	scanf("%d",&a[i]);
	ElemSN *head ;
	//创建单项循环链表 
	head =Greatelink(a);
	//输出单项循环链表 
	Printlink (head); 
	printf ("\n");
	//输入待删结点的值
	printf ("请输入待删节点的值key：");
	scanf ("%d",&key);
	printf ("\n"); 
	flag=1;
	//删除值为key的结点 
	Delkeynode(head,key);
	//输出处理后的单项循环链表 
	Printlink (head);
}
