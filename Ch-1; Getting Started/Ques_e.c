#include<stdio.h>
#include<conio.h>
int main()
{
    float l, b, r,ar, pr, ac, cc;

    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);

    printf("Enter the radius of circle: ");
    scanf("%f", &r);

     ar = l * b;  
     pr = 2 * (l + b); 


     ac = 3.14 * r * r;
     cc = 2 * 3.14 * r;  

     printf("\nThe area of the rectangle: %f\n", ar);
     printf("\nThe perimeter of the rectangle: %f\n", pr);
     printf("\n\nThe area of the circle: %f\n", ac);
     printf("\nThe circumference of the circle: %f\n", cc);

     return (0);
}