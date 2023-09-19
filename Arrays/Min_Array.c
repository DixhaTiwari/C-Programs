/* Find the minimum value out of all the elements
 in the array.  */

 #include<stdio.h>
 int main()
 {
    int arr[5] = {8,6,5,2,97};
    int min = arr[4];

for(int i=0;i<=4;i++)
{
    if(min>arr[i])
    {
        min = arr[i];
    }
}
        printf("%d",min);

    return 0;
 }
