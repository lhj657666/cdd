#include <stdio.h>
void main()
{
int a;
printf("[打工人工资等级划分]\n");
scanf("%d",&a);
if (a<0)
{printf("你还有花呗没还，无法使用该程序。\n");}
else if (0<=a&&a<=500)
{printf("赤贫\n");}
else if (501<=a&&a<=1500)
{printf("贫困\n");}
else if (1501<=a&&a<=3000)
{printf("普通打工人\n");}
else if (3001<=a&&a<=5000)
{printf("普通清洁工\n");}
else if (5001<=a&&a<=12000)
{printf("水电工工资\n");}
else if (12001<=a&&a<=50000)
{printf("脑袋大脖子粗不是老板就是伙夫\n");}
else if (50001<=a&&a<=2000000)
{printf("程序员\n");}
}
