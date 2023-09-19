// It is also called Swap Preference

#include<stdio.h>

void swap(int* x, int* y)
{
    int temp;
   temp = *x;
   *x = *y;
   *y = temp;
    return;
}



int main()
{
int a = 2;
int b = 9;

 swap(&a,&b);

printf("The value if a is %d",a);
printf("\nThe value if b is %d",b);

    return 0;
}