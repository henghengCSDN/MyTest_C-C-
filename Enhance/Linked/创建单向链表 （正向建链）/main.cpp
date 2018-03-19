#include "main.h" 

int main ()
{
	int a[N];
	int i;
	//录入数组
	printf ("请输入一个长度为%d的一维数组：\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	ElemSN *head=NULL;
	//正向创立单向链表 
	head =Creatlink (a);
	//输出单链表
	Printlink(head);
} 
