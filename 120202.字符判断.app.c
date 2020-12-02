#include <stdio.h>
void main ()
{
char a;
printf("字符判断\n");
scanf("%c",&a);
	switch (a)
	{
	case 'a':printf("你在点击左键\n");break;
	case 's':printf("你在点击下键\n");break;
	case 'd':printf("你在点击右键\n");break;
	case 'w':printf("你在点击上键\n");break;
    default :printf("老铁的输入错误，请输入a,s,d,w中的其中一个。\n");
	}
}
