#include<stdio.h>
int main()
{
int a = 25;
int* x = &a;   //int*  --> integer's address is stored

int** y = &x;     //int**  --> int* 's  address is stored
printf("%p\n",&x);
printf("%p",y);

    return 0;
}