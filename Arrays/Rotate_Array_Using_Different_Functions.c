/*  Ques : Rotate the given array 'a' by k steps, where k is
 non-negative.
 Note : k can be greater than n as well where n is the
 size of array 'a'.   */

 #include<stdio.h>
 void Reverse(int arr[],int Starting_Index,int Ending_Index)
{
    for(int i=Starting_Index,j=Ending_Index;i<j;i++,j--)  //This function is for reversing part of array
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 2;
    // Steps:
    k = k%n;
    Reverse(arr,0,n-1);  
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    for(int i=0;i<=6;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
