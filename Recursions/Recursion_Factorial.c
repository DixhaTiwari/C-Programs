#include<stdio.h>

int factorial(int n)
{
    if(n==1 || n==0)    //base case
    return 1;
    int Recursion_Answer = n*factorial(n-1);
    return Recursion_Answer;
}

int main()
{
    int n;
printf("Enter a number:");
scanf("%d", &n);

int fact = factorial(n);
printf("%d",fact);

    return 0;
}