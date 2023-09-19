/*  Write a program to copy the contents of one
 array into another in the reverse order.  */
 
 
#include<stdio.h>
int main()
{
    int arrA[5] = {1,2,3,4,5};
    int arrB[5];

    for(int i=0; i<=4; i++)
     {
        arrB[i] = arrA[5-i];
    }
    for(int i=0; i<=4; i++) {
        printf("%d ",arrB[i]);
    }


    return 0;
}