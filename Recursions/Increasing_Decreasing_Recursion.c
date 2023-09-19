#include<stdio.h>

void Decreasing(int n)
{
    if(n==0)
    return;
    printf("%d\n",n);
    Decreasing(n-1);
}
void Increasing(int x,int n)
{
    if(x>n)
    return;
    printf("%d\n",x);
    Increasing(x+1,n);
}



int main()
{
    int n;
printf("Enter the Number: ");
scanf("%d",&n);

Decreasing(n);
Increasing(1,n);

    return 0;
}