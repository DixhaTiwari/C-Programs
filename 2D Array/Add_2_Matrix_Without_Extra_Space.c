/* Write a program to add two matrices without using extra space.  */


#include<stdio.h>
int main()
{
int a[2][3] = {1,2,3,4,5,6};
int b[2][3] = {16,17,18,19,20,21};

//int result[2][2];

int i,j;

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
     a[i][j] + b[i][j];
    }
}
for( i=0;i<2;i++)
{
    for( j=0;j<3;j++)
    {
   printf("%d ",a[i][j] + b[i][j]);
    }
printf("\n");
}
    return 0;
}