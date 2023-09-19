#include<stdio.h>
int main()
{
int a = 5;
int* x = &a;
printf("%p",x);  // %p is for pure address
printf("\n%p",&x);

    return 0;
}