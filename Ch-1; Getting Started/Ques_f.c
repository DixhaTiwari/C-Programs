#include<stdio.h>
int main()
{
    int C,D,T;
    printf("Enter the value of C:");
    scanf("%d",&C);
    printf("Enter the value of D:");
    scanf("%d",&D);
    C=C+D;
    D=C-D;
    C=C-D;
    printf("The value of C:%d\n",C);
    printf("The value of D:%d\n",D);
    getch();
}