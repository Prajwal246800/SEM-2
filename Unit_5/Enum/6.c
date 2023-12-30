#include<stdio.h>
enum design
{
	bold=5,italic=8,underline=12
}d1;

int main()
{
	d1 = bold;
	d1 = bold|italic;
	printf("%d\n",d1);//8
	if(d1 == bold)
		printf("Only bold\n");
	else if(d1 == (bold|italic))
		printf("Both it is\n");
	else
		printf("Only italic\n");
	return 0;
}