#include<stdio.h>
int factorial(int x)
{
int fact =1;
for(int i=1;i<=x;i++)
{
fact=fact*i;
}
return fact;
}


int main()
{
int a = factorial(4);
printf("%d",a);

return 0;
}