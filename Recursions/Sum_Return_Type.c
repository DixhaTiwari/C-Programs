// Print sum from 1 to n (Return Type)

#include<stdio.h>

int Sum(int n)
{
    if(n==1 || n==0)    //base case
    return n;
    int Sum_Answer = n+Sum(n-1);
    return Sum_Answer;
}

int main()
{
    int n;
printf("Enter a number:");
scanf("%d", &n);

printf("%d",Sum(n));

    return 0;
}