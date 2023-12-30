// #include<stdio.h>
// //int i=23;
// int main()
// {
//     extern int count;
//     extern int i; 
//     i=i+1;
//     printf("%d\n",count);
// }
// int i=23;

#include <stdio.h>
int count ;
extern void write_extern();
int main() {
count = 5;
write_extern();
return 0;
}
