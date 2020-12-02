#include <stdio.h>
void main ()
{
	while (1)
	{
 int h,m,s;
 printf("==========秒与时分秒换算器==========\n");
 scanf("%d",&s);
 h=s/3600;
 m=s/60%60;
 s%=60;
 if (h<=23 && m<=59 && s<=59)
 {
 printf("%02d:%02d:%02d\n",h,m,s);
 printf("              \n");
 }
 else
 {
  printf("您的数值超出范围字样，请重新输入!\n");
  printf("                                 \n");
 }
	}
}
