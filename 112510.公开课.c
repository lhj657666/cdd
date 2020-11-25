#include <stdio.h>
void main ()
{
	int a;
	printf("打工人工资判断\n");
	scanf("%d",&a);
	if (a>=0 && a<=100)
		printf("贫困打工人\n");
	else if (a>=101  && a<=1000)
		printf("一般打工人\n");
	else if (a>=1001 && a<=20000)
		printf("土豪打工人\n");
	else
		printf("输入有误，请重新输入。\n");
}
