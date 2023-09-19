// Power Function (Logarithmic)

#include<stdio.h>

int PowerLog(int B, int E)
{
    if(E==0)
    return 1;

    if(E==1)
    return B;

int x = PowerLog(B,E/2);
if(E%2==0)
return x * x;

else
return x * x * B;

}


int main()
{
int B,E,P;
printf("Enter Base: ");
scanf("%d", &B);
printf("Enter Exponent: ");
scanf("%d", &E);

P = PowerLog(B,E);
printf("%d raised to the power %d is %d",B,E,P);

    return 0;
}