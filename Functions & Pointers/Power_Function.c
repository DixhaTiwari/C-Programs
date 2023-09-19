#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
printf("Enter the 1st Number:");
scanf("%d",&n);
printf("Enter the 2nd Number:");
scanf("%d",&m);

int Power= pow(n,m);
printf("The Power of the two numbers are:%d",Power);

return 0;
}