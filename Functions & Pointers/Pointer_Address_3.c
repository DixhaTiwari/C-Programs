#include<stdio.h>
int main()
{
int a = 5;
int* x;
x = &a;
printf("%p",&a);
printf("\n%p",x);

    return 0;
}