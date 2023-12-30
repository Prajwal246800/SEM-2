#include<stdio.h>
struct exa
{
	//unsigned int *p:4;//error
	unsigned int c:3;
	//unsigned int b[10]:4;//error
	
}e;
int main()
{
	printf("%d\n",sizeof(struct exa));
	//e.b=25;//warning
	e.c=5;
	//printf("%d and %d\n",e.c,e.b);
	return 0;
}