//static
#include<stdio.h>
void fun();
static int i=15;
int j=15;
int main()
{
	fun(); //15 15 15
	fun(); //15 16 16
	fun(); //15 17 17
	return 0;
}
void fun()
{
	static int k=15;
	printf("%d %d %d\n",k,i,j);
	i++;
	j++;
	k++;
}