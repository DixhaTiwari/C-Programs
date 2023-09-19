#include<stdio.h>

int factorial(int x)
{
    int fact = 1;
    for(int i=1;i<=x;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int Permutation(int n, int r)
{
    int nPr = factorial(n)/factorial(n-r);
    return nPr;
}



int main()
{
    int n,r;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("Enter the r:");
    scanf("%d",&r);

    int nPr = Permutation(n,r);
    printf("%d",nPr);

    return 0; 
}