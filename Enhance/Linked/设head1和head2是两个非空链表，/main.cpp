/****设head1和head2是两个非空链表，
	（数据域重复且升序排列），将
	 head1和head2合成一个升序链****/

#include <stdio.h> 
#include "fun.h"

int printflink (ElemSN *h)
{
	ElemSN *p;
	printf ("处理后结果为：\n");
	for (p=h;p!=NULL;p=p->next)
		printf ("%d\t",p->data);
}


int main ()
{
	int a[N],b[M],i,key;
	ElemSN *head = NULL;
	ElemSN *head1 = NULL;
	ElemSN *head2 = NULL;
	printf("请输入(链表1的数据)%d个数：\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	printf("请输入(链表2的数据)%d个数：\n",M);
	for (i=0;i<M;i++)
		scanf ("%d",&b[i]);
	//正向创建单向链表
	head1 = PreCreatelink1 (a);
	head2 = PreCreatelink2 (b);
	//链表重排序 
	head=fun(head1,head2); 
	//输出单向链表
	printflink (head); 	
}
