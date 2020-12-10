#include <stdio.h>
#include <string.h>
#include <windows.h>
void main()
{
	while(1){
    char s1[30];
    char s2[]="春节";
	char s3[]="端午节";
	char s4[]="中秋节";
	char s5[]="元宵节";
	printf("请问今天是什么节日?\n");
	scanf("%s",&s1);
	if(strcmp(s1,s2)==0){
	printf("给我安排饺子\n");
	}
	else if(strcmp(s1,s3)==0){
	printf("给我安排粽子\n");
	}
	else if(strcmp(s1,s4)==0){
	printf("给我安排月饼\n");
	}
	else if(strcmp(s1,s5)==0){
	printf("给我安排元宵\n");
	}
	else 
	{
    printf("输入错误，请重新输入。\n");
	}
	Sleep(3000);
	}
}
