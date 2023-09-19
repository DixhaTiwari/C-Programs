// Maze Path

#include<stdio.h>

int Maze(int CR, int CC, int ER, int EC)   // CR = Current Row, CC = Current Column, ER = Ending Row, EC = Ending Column
 { 
    int RightWays = 0;
    int DownWays = 0;

    if(CR == ER && CC == EC)
    return 1;

    if(CR == ER)  // only RightWAys call
    {
        RightWays += Maze(CR, CC+1, ER, EC);
    }
    if(CC == EC)  // only DownWards call
    {
        DownWays += Maze(CR+1, CC, ER, EC);
    }
    if(CR<ER && CC<EC)
    {
        RightWays += Maze(CR, CC+1, ER, EC);  // To go rightwards column was increasing by one
        DownWays += Maze(CR+1, CC, ER, EC);   // To go downwards row was increasing by one
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

    int Ways = Maze(1,1,R,C);
    printf("%d",Ways);

    return 0;
}