#include<stdio.h>
int main()
{
int a = 5;
int *x = &a;
*x = 7;    //a is changed 
printf("%p",&a);
printf("\n%p",x);

    return 0;
}