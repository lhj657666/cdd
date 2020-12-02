#include <stdio.h>
#define SIZE 3
int main()
{
  int a[SIZE]={89,3,35};
  int i,j,t;
  printf("此程序使用冒泡排序法排列无序数列！\n");
  for(i=0;i<3-1;i++)
  {
    for(j=0;j<3-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j+1];
        a[j+1]=a[j];
        a[j]=t;
      }
    }
  }
  
  printf("排列好的数列是：\n");
  for(i=0;i<3;i++)
  {
  
    printf("%d ",a[i]);
  }
  return 0;
}
