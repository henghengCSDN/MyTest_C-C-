/***********选择法排序**********/
/*选择一个非空单向链表升序排序*/

#include <stdio.h> 
#include "Selectsort.h"

int printflink (ElemSN *h)
{
	ElemSN *p;
	printf ("处理后结果为：\n");
	for (p=h;p!=NULL;p=p->next)
		printf ("%d\t",p->data);
}


int main ()
{
	int a[N],i,key;
	ElemSN *head = NULL;
	printf("请输入%d个数：\n",N);
	for (i=0;i<N;i++)
		scanf ("%d",&a[i]);
	//正向创建单向链表
	head = PreCreatelink (a);
	//链表重排序 
	head=Selectsort(head); 
	//输出单向链表
	printflink (head); 	
}
