/*   Find the maximum -ve value out of all the elements
 in the array.  */

 #include<stdio.h>
 #include<limits.h>
int main()
{
int arr[8] = {-99,-1,-4,-2,-8,-19,-5,-12};
int max = INT_MIN;  // sabse chota no. se comp;arison
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
