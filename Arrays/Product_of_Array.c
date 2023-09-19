/* Calculate the product of all the elements
 in the given array. */

 #include<stdio.h>
 int main()
 {
    int Product=1;          // We cannot initialise product with 0
int arr[5] = {1,2,3,4,5};   // the way we did it in Sum bcoz Product will come as 0
for(int i=0;i<=4;i++)
{
    Product = Product * arr[i];
}
printf("%d",Product);

    return 0;
 }
