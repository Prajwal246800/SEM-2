#include<stdio.h>
int main()
{
	//auto
	/*int a=10;
	auto int b=20;
	printf("%d and %d \n",a,b);
	return 0;*/
	
	//extern
	extern int i;
	printf("%d\n",i);
}
int i=20;