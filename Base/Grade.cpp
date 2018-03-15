#include <stdio.h>
int main(void)
{
	float a;
	while (1)
	{
		printf ("请输入一个学生成绩：\n");
		scanf ("%f",&a);
		if (a>=90 && a<=100)
			printf ("该学生成绩优秀！\n");
		else
			if (a>=80 && a<90)
				printf ("该学生成绩良好！\n");
		else 
			if (a>=60 && a<=80)
				printf ("该学生成绩及格！\n");
		else
			if (a>=0 && a<60)
				printf ("该学生需要补考！\n");
		else 
			if (a<0 || a>100)
				printf ("此成绩无效，请重新输入！\n");
		printf ("\n\n\n"); 
	}
	return 0;				
} 
