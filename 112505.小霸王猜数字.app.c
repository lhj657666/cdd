#include <stdio.h>
#include <windows.h>
void main()
{
 printf("猜数字大赛，如果你猜中了会有奖励噢\n");
 printf("友情提示:请猜0-10的数字\n");
while(1){
		int a=5;
		int b;
 scanf("%d",&b);
 if (b==a)
 {
 printf("恭喜小猪，你猜对了，你的奖励是来自帅气(美丽)的老师的悉心教导\n");
 }
 else if (b>6)
 {
 printf("不好意思，小猪你猜大了，你还可以继续猜数字噢\n");
 }
 else
 {
 printf("不好意思，小猪你猜小了，你还可以继续猜数字噢\n");
 }
	}
}
