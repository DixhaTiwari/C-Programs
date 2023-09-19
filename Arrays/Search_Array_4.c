/*   Given an array containing elements from 1 to
 100 except one element in this range is missing. Find
 the missing element.    */


    #include<stdio.h>
    #include<stdbool.h>
    int main()
    {
    int arr[7] = {12,21,21,42,21,7};
    int x = 29;
    int idx = -1;  //idx is here to maintain Index
    bool flag = false; // False means not present and Boolean is a data type like int
    for(int i=0;i<=6;i++)   
    {
        if(arr[i]==x)
        {
           flag = true; // True means present
           idx = i;
            break;
        }
    }
    if(flag == false)
    {
    printf("%d is not present in the array",x);
    }
    else
    {
      printf("%d is present in the array and its index is %d",x,idx);  
    }

    return 0;
    }



