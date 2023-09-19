/* Homework: If an array arr contains n elements, then
 check if the given array is a palindrome or not.
 */

#include<stdio.h>
void Palindrome(int arr[])
{
    for(int i=0,j=5;i<j;i++,j--)
    {
        if(i==j)
        i++;
        j--;
        else
        break;
    }
    return;
}

int main() {
   int arr[] = {1, 0, 2, 3, 2, 2, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
   if(pallindrome(arr, n)) {
      printf("Array is pallindrome
");
   }
   else
      printf("Array is not pallindrome
");
   return 0;
}


 


