// Print sum from 1 to n (Parameterised)

#include<stdio.h>

   void Sum(int n,int s)
   {
    if(n==0)
    {
    printf("%d\n",s);
    return;
    }
    Sum(n-1,s+n);
    return;
}

int main()
{
    int n;
printf("Enter a number:");
scanf("%d", &n);

Sum(n,0);

    return 0;
}
