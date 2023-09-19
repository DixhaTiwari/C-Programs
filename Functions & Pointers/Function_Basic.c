#include<stdio.h>
void greet()  // greet is the name of this function 
{
    printf("Good Morning\n");
    printf("How are you?\n");
    return;
}

int main()
{
 greet();  // call
 greet();
 greet();
    return 0;
}