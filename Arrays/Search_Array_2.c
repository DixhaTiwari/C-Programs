/*   Given an array containing elements from 1 to
 100 except one element in this range is missing. Find
 the missing element.    */


    #include<stdio.h>
   
    int main()
    {
    int arr[7] = {1,2,3,4,6,4,7};
    int x = 4;
    for(int i=6;i>=0;i--)  // It is written when we want the index to be counted from last
    {
        if(arr[i]==x)
        {
            printf("%d is present in the Array and its index is %d\n",x,i);
        }
    }

    return 0;
    }



