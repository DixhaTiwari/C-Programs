// Print first 'n' fibonacci numbers using function

#include<stdio.h>

int fibonacci(int n)
{
int a=1,b=1,Sum=1,i;
for(i=1;i<=n-2;i++)
{
    Sum= a+b;
    a=b;
    b=Sum;
}
return Sum;
}

int main()
{
    int n;
printf("Enter the number: ");
scanf("%d", &n);

int x= fibonacci(n);

printf("The fibonacci number is: %d",x);

return 0;
}

