#include <stdio.h>
void main ()
{
	int a,b;
int array[]={2020,2021,2022,2023};
int array2d[2][3]={
	{1,2,3},
	{4,5,6}
};
for (a=0;a<2;a++){
	for (b=0;b<3;b++){
	printf("%d ",array2d[a][b]);
	}
printf("\n");
}
}
