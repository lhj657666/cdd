#include <stdio.h>
void main()
{
int x;
printf("x=");
scanf("%d",&x);
if (x<1)
{printf("y=%d\n",x);}
else if (1<=x&&x<10)
{printf("y=%d\n",2*x-1);}
else
{printf("y=%d\n",3*x-11);}
}
