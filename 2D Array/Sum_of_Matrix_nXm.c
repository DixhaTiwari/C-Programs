// Find the sum of a given matrix of n x m.

#include<stdio.h>
int main()

{
int R;
printf("Enter the no. of Rows:");
scanf("%d", &R);
int C;
printf("Enter the no. of Columns:");
scanf("%d", &C);

int arr[R][C];
 printf("The elements of Rows and Columns: ");
for(int i=0; i<R;i++)
{
    for(int j=0;j<C;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}

//printf("\n");
for(int i=0;i<R;i++)
{
    for(int j=0;j<C;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
int Sum = 0;
for(int i=0;i<R;i++)
{
    for(int j=0;j<C;j++)
    Sum += arr[i][j];
}
printf("The sum of the given matrix is %d",Sum);
    return 0;
}
