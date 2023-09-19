#include<stdio.h>

float sum(void); //function declaration is important 
             // declare what you are defining 

void main()
{
    sum(); //function calling
}


float sum() //function definition
{
    float a,b,sum;
    printf("Enter the numbers:");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("sum=%f\n",sum);
}
