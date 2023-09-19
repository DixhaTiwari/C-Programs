// Maze Path_Other_Way

#include<stdio.h>

int Maze2(int R, int C)   // R = Current Row, C = Current Column
 { 
    int RightWays = 0;
    int DownWays = 0;
    if(R==1 && C==1)
    return 1;

        if(R==1) // cannot go down
    {
        RightWays += Maze2(R,C-1);
    }
        if(C==1) // cannot go right
    {
        DownWays += Maze2(R-1,C);
    }
    if(R>1 && C>1)
    {
        RightWays += Maze2(R,C-1);
        DownWays += Maze2(R-1,C);
    }
    int TotalWays = RightWays + DownWays;
    return TotalWays;
 }


int main()
{
    int R,C;
    printf("Enter no. of Rows of the Maze: ");
    scanf("%d",&R);
     printf("Enter no. of Columns of the Maze: ");
    scanf("%d",&C);

    int Ways = Maze2(R,C);
    printf("%d",Ways);

    return 0;
}