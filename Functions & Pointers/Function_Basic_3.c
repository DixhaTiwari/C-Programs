#include<stdio.h>
int add(int x,int y)  // this is the return type
{
    return x+y;
}
int minus(int x,int y)  
{
    return x-y;
}
int multiply(int x,int y) 
{
    return x*y;
}


int main()
{
int a;
printf("Enter 1st number:");
scanf("%d",&a);
int b;
printf("Enter 2nd number:");
scanf("%d",&b);

int Sum = minus(a,b);
printf("%d",Sum);

    return 0;
}