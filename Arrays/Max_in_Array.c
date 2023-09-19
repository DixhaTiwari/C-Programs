/*  Find the maximum value out of all the elements
 in the array.  */

 #include<stdio.h>
int main()
{
int arr[8] = {99,1,4,2,8,19,5,12};
int max = arr[1];  // sabse chota no. se comparison
for(int i=0;i<=7;i++)
{
if (max<arr[i])
    {
        max = arr[i];
    }
}
printf("%d",max);
    return 0;
}
