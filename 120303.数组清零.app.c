#include <stdio.h>
#include <windows.h>
void main ()
{
	int a,b;
int array[]={2020,2021,2022,2023};
int array2d[20][10]={
	{1,2,3},
	{4,5,6}
};
for (a=0;a<20;a++){
	for (b=0;b<10;b++){
    array2d[a][b]=999;
	printf("%d ",array2d[a][b]);
	}
	printf("\n");
	}
for (a=0;a<20;a++){
	for (b=0;b<10;b++){
    array2d[a][b]=0;
	printf("%d ",array2d[a][b]);
	}
	printf("\n");
}
    Sleep(5000);
for (a=0;a<20;a++){
	for (b=0;b<10;b++){
    array2d[a][b]=999;
	printf("%d ",array2d[a][b]);
	}
	printf("\n");
}
}
