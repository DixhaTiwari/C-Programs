/*  Count the number of triplets whose sum is
 equal to the given value Х.  */

#include<stdio.h>
int main()
{
int x=12,TotalTriplets=0,i,j,k;
int arr[8]={1,2,3,4,5,6,7,8};

for(i=0;i<=7;i++)
{
    for(j=i+1;j<=7;j++)
    {
        for(k=j+1;k<=7;k++)
        {
            if(arr[i]+arr[j]+arr[k]==x)
            {
            TotalTriplets++;
            printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            }
        }
    }
}
printf("%d",TotalTriplets);
    return 0;
}

