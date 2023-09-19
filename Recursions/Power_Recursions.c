// Make a function which calculates 'a'
// raised to the power 'b' using recursion.

#include<stdio.h>

int power(int a,int b)
{
    if(b==0)
    return 1;
   int Rec_Ans = a* power(a,b-1);
    return Rec_Ans;
}

int main()
{
    int a,b;
printf("Enter a: ");
scanf("%d", &a);
printf("Enter b: ");
scanf("%d", &b);

int p = power(a,b);
printf("%d raised to the power %d is %d",a,b,p);

    return 0;
}
