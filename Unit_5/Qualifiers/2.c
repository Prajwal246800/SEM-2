#include<stdio.h>
int main()
{
	volatile int a = 10;
	printf("Initial value of a is %d\n",a);
	a = 100;
	printf("modified value of a is %d\n",a);
	return 0;
}