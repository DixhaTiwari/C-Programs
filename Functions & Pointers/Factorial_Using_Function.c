// Print the Factorial of first n numbers using function


#include<stdio.h>

int factorial(int n)
{
    int i=1,F = 1,x;
    for(i=1;i<=n;i++)
    {
        F = F * i;
    
    }
    return F;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int x= factorial(n);
    printf("Factorial of %d is %d",n,x);

    return 0;
}