/*   Write a program to store roll number and
 marks obtained by 4 students side by side in a
 matrix.  */


#include<stdio.h>
int main()
{
    int Rows,Columns;
    printf("Enter the number of Rows:");
    scanf("%d", &Rows);
    
printf("Enter the no. of Columns:");
scanf("%d",&Columns);

int arr[Rows][Columns];
printf("Enter the elements of Rows and Columns:");


for(int i=0;i<Rows;i++)
{
    for(int j=0;j<Columns;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}

    for(int i=0;i<Rows;i++)
{
    for(int j=0;j<Columns;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

return 0;

}