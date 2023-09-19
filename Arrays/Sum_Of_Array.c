/* Calculate the sum of all the elements in the
 given array.  */


#include<stdio.h>
int main()
 {
    int arr[5] = {1,2,3,4,5};
        int Sum = 0;
        for(int i=0;i<=4;i++)
        {
                Sum = Sum + arr[i];
        }
                printf("%d",Sum);

     return 0;
 }
