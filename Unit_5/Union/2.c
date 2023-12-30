#include<stdio.h>
#include<string.h>
union test{
	int x;
	float y;
	char z[10];
};
int main()
{
	union test t1;
	union test *t2;
	t2 = &t1;
	t1.x = 70;
	//printf("%d ",t1.x);
	t1.y = 70.8;
	//printf("%f ",t2->y);
	strcpy(t1.z,"PESU");
	printf("%d %f %s\n",t1.x, t1.y,t1.z);
	return 0;
}