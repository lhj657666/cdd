#include <stdio.h>
#include <string.h>
#include <windows.h>
void main()
{
	char a[30];
	char b[]="小霸王";
	printf("请输入登入账户名\n");
	while(1)
	{
	scanf("%s",&a);
	if(strcmp(a,b)==0)
	{
	printf("欢迎进入小霸王猜数字游戏\n");
	Sleep(3000);
	printf("猜数字大赛，如果你猜中了会有奖励噢\n");
    printf("友情提示:请猜0-10的数字\n");
		while(1)
		{
		int a=5;
		int b;
        scanf("%d",&b);
        if (b==a)
		{
        printf("恭喜小霸王，你猜对了，你的奖励是来自帅气(美丽)的老师的悉心教导\n");
		}
        else if (b>6)
		{
        printf("不好意思，小霸王你猜大了，你还可以继续猜数字噢\n");
		}
        else
		{
        printf("不好意思，小霸王你猜小了，你还可以继续猜数字噢\n");
		}
		}
	}
	else
	{
	    printf("输入错误，请重新输入。\n");
	}
	}
}
