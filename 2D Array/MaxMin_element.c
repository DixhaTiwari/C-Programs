/* Find out the maximum element and minimum element in 2D Array
and the index of the maximum element   */

#include<stdio.h>
int main()
{
    int Rows,Columns,Largest,Smallest;
    int LargestRowLocation,LargestColumnLocation,SmallestRowLocation,SmallestColumnLocation;

    printf("Enter the no. of Rows:");
    scanf("%d",&Rows);
    printf("Enter the no. of  Columns:");
    scanf("%d",&Columns);

    int i,j,arr[Rows][Columns];
    for(i=0;i<Rows;i++)
    {
        for(j=0;j<Columns;j++)
        {
            printf("Enter arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("Entered 2D Array:\n");
    for(i=0;i<Rows;i++)
    {
        for(j=0;j<Columns;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

     Largest = arr[0][0];
     Smallest = arr[0][0];
    
    for(i=0;i<Rows;i++)
    {
        for(j=0;j<Columns;j++)
        {
            if(Largest<arr[i][j])
            {
                Largest = arr[i][j];
                LargestRowLocation = i;
                LargestColumnLocation = j;
            }
             if(Smallest>arr[i][j])
            {
                Smallest = arr[i][j];
                SmallestRowLocation = i;
                SmallestColumnLocation = j;
            }
        }
    }
        printf("\n");
    printf("Largest Element in Array is %d in Location arr[%d][%d]\n",Largest,LargestRowLocation,LargestColumnLocation);
    printf("Smallest Element in Array is %d in Location arr[%d][%d]\n",Smallest,SmallestRowLocation,SmallestColumnLocation);


    return 0;
}