//  Print 1 to n (after Recursive Call)

#include<stdio.h>

   void Increasing(int n)
   {
    if(n==0)     // base case
    return;
    Increasing(n-1);   // call
    printf("%d\n",n);  // code

   return;
}

int main()
{
    int n;
printf("Enter a number:");
scanf("%d", &n);

Increasing(n);

    return 0;
}

