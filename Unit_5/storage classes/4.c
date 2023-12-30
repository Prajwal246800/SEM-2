#include<stdio.h>
//register
int main()
{
	int i =10;
	register int *a = &i;
	printf("%d\n",*a);
	return 0;
}