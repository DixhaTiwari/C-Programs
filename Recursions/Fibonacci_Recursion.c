// Multiple Calls
// Fibonacci 

#include<stdio.h>

int fibo(int n)
{
    if(n==1 || n==2)           // or,  if(n<=2)
    return 1;
int ans1 = fibo(n-1);         // or instead of these 3 lines
int ans2 = fibo(n-2);        // we can just use
int ans = ans1 + ans2;       //  return fibo(n-1)+fibo(n-2);
 
return ans;
}

int main()
{
int n;
printf("Enter the Number: ");
scanf("%d",&n);

printf("The Fibonacci is %d",fibo(n));

    return 0;
}