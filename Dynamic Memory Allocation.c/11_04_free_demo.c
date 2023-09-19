#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
int *ptr2;

//Sizeof operator in C
//printf("The size of int on my pc is %d\n", sizeof(int));
//printf("The size of float on my pc is %d\n", sizeof(float));
//printf("The size of char on my pc is %d\n", sizeof(char));

ptr= (int *)malloc(6* sizeof(int));
for(int i=0;i<600;i++)
{
ptr2= (int *)malloc(600* sizeof(int));
    printf("Enter the value of %d element: \n", i,ptr);
    scanf("%d", &ptr[i]);
    //free(ptr2); //can put as much inputs as well
}

for(int i=0;i<6;i++)
{
    printf("Enter the value of %d element:%d \n", i,ptr[i]);
}
    return 0;
}