/*   Given an array containing elements from 1 to
 100 except one element in this range is missing. Find
 the missing element.    */


    #include<stdio.h>
   
    int main()
    {
    int arr[7] = {1,2,3,4,6,4,7};
    int x = 4;
    for(int i=0;i<=6;i++)
    {
        if(arr[i]==x)
        {
            printf("%d is present in the Array and its index is %d\n",x,i);
            //break;  // Break is used only when 2 elements are present in array and it must be printed only once
        }
    }

    return 0;
    }



