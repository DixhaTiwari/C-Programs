#include<stdio.h>
void main()
{
    int arr1[5],arr2[5],sumarr3[5], i;

    printf("Enter the first array elements:\n");
    for (i=0;i<5;i++)
     scanf("%d",&arr1[i]);

    printf("Enter the second array elements:\n");
    for (i=0;i<5;i++)
     scanf("%d",&arr2[i]);

     for (i=0;i<5;i++)
     {
        sumarr3[i]= arr1[i]+arr2[i];
        printf("Third array element at index %d is %d\n",i,sumarr3[i]);
     }
    }
   
