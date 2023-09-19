/*   Find the second largest element in the given
 Array.  */

 #include<stdio.h>
 #include<limits.h>
 int main()
 {
    int i;
int arr[7]= {91,23,38,63,45,87,80};
    int Largest = INT_MIN;
    int Second_Largest = INT_MIN;

    for(i=0;i<=6;i++)
    {
        if (Largest<arr[i])
        {
            Largest=arr[i];
        }
    }
    for(i=0;i<=6;i++)
    {
        if(arr[i]!=Largest && Second_Largest<arr[i])
        {
            Second_Largest = arr[i];
        }
    }
    printf("The Second Largest no. of this array is %d",Second_Largest);

    return 0;
 }