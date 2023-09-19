#include<stdio.h>
union abc
{
    int a; 
    char b; 
    float c;
};
void main()
{
    union abc u;
    union abc *ptr=&u;
    u.a=1;
    u.b=97;
    u.c=78.90;
    printf("A value is: %d",ptr->a);
    printf("B value is: %c",ptr->b);
    printf("C value is: %f",ptr->c);
} 