#include <stdio.h>
int myFunction(int x)
{
	if (x>0)
	{
		return x+myFunction(x-1);
	}
			return(0);
}
void main()
{
printf("%d",myFunction(10));//可任意改变myFunction(10)中的数字，这是一个将此数字和其前面的数字相加的代码，称为递归求和。
}
