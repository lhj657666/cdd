#include <stdio.h>
#include <windows.h>
void main()
{
	while(1)
	{
printf("男:天气冷了，有个成语叫忘穿秋裤，你穿秋裤了吗?\n");
Sleep(5000);
printf("女:。。。\n");
Sleep(5000);
	}
}
或
#include <stdio.h>
#include <windows.h>
void main ()
{
int a=1;
while(1)
{
	Sleep(1000);
	printf("%d...亲，又一秒过去了哦...\n",a);
	a++;
}
}
