/* Count the number of elements in given array
 greater than a given number Х.  */


 #include<stdio.h>
 int main()
 {
int arr[7]= {1,2,3,4,5,6,7};
int x=4,i,count = 0;

for(i=0;i<=6;i++)
{
    if(arr[i]>x)
    {
    count++;
    }
}
printf("%d",count);

    return 0;
 }
