/*  Find the total number of pairs in the Array
 whose sum is equal to the given value Х.  */

 #include<stdio.h>
 int main()
 {
 int arr[8]= {1,2,3,4,5,6,7,8};
 int TotalPairs = 0;
 int x=12,i; 
 
 for(i=0;i<=7;i++)
 {
    for(int j=i+1;j<=7;j++)
    {
        if(arr[i] + arr[j] == x)
        {
            TotalPairs++;
            printf("(%d,%d)\n",arr[i],arr[j]);
        }
    }
 }
 printf("%d",TotalPairs);
 
 return 0;
 }