#include<stdio.h>
int main()
{
	short int i = 1000;//size
	int j = 100000;
	long int k = 10000000;//size
	printf("Size is %d %d %d\n",sizeof(i),sizeof(j),sizeof(k));
	printf("Value is %d %d %ld\n",i,j,k);
	unsigned int a = 10;
	unsigned int b = -10;   // observe this
	int c = 10;  
	signed int d = -10;
	printf("%u %u %d %d\n",a,b,c,d);
	printf("%d %d %d %d\n",a,b,c,d);
	printf("%u",d);
	return 0;
}