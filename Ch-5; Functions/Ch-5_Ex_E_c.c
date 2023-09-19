#include <stdio.h>
void fun(int,int);
//int i,j; //Global variable
int main()
{
    int i =5,j=2; // Here i,j are called Local Variable
    fun(i,j);
    printf("%d %d\n",i,j);
    return 0;
}
void fun(int i,int j)
{
    i=i*i;
    j= j*j;
//printf("%d %d\n",i,j);
   
}