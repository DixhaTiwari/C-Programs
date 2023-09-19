/*   Given an array containing elements from 1 to
 100 except one element in this range is missing. Find
 the missing element.    */


    #include<stdio.h>
   
    int main()
    {
    int arr[7] = {1,2,3,4,6,4,7};
    int x = 4;
    int Check = 0;  // 0 means element is not present
    for(int i=0;i<=6;i--)   
    {
        if(arr[i]==x)
        {
            Check = 1;  // 1 means element is present
            break;
        }
    }
    if(Check == 0)
    {
    printf("%d is not present in the array",x);
    }
    else
    {
      printf("%d is present in the array",x);  
    }

    return 0;
    }



