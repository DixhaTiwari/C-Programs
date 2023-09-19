#include<stdio.h>
     int main()
     {
        int a,b;
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b: ");
        scanf("%d",&b);
        a = a+b;
        b = a-b;
        a = a-b;
        printf("The swapped no. are : ");
        printf("\nThe value of a has now become: %d",a);
        printf("\nThe value of b has now become: %d",b);
        

        return 0;
     }