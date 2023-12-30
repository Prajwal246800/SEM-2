#include<stdio.h>
#include<stddef.h>//offsetof()
union A
{
	int x,y,z;
};
struct B
{
	int x,y,z;
};
int main()
{
	union A a[10];
	printf("%d\n",sizeof(union A));//4
	printf("%d\n",sizeof(a));//40
	printf("%d\n\n",sizeof(struct B));//12

	printf("%lu\n",offsetof(union A,x));//0
	printf("%lu\n",offsetof(union A,y));//0
	printf("%lu\n\n",offsetof(union A,z));//0
	
	printf("%lu\n",offsetof(struct B,x));//0
	printf("%lu\n",offsetof(struct B,y));//4
	printf("%lu\n",offsetof(struct B,z));//8
	return 0;
}