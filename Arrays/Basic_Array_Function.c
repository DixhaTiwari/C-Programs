 #include<stdio.h>

void fun(int x[])
{
    x[0] = 10;
    return;
}


 int main()
 {
    int arr[5] = {1,2,3,4,5};
    printf("%d",arr[0]);
    fun(arr);
    printf("\n%d",arr[0]);


    return 0;
 }
