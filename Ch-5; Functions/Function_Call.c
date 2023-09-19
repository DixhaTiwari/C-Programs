#include<stdio.h>
void fun(int,int); //Function Parameter
 
void main() // Calling function
{
    int x=5,y=7;
    fun(x,y);
    printf("Inside main(calling function)\n");
    printf("x=%d y=%d\n",x,y);
}

void fun(int x, int y)   //function definition
{
    x=7;
    y=5;
    printf("Inside fun(called function)\n");
    printf("x=%d y =%d\n",x,y);
}