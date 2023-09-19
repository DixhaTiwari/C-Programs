// Tower of HANOI


#include<stdio.h>

void Tower(int n, char Source, char Helper, char Destination)
{
    if(n==0)
    return;
Tower(n-1,Source,Destination,Helper);
printf("Move the Disc from %c to %c\n", Source, Destination);
Tower(n-1,Helper, Source, Destination);
return;

}



int main()
{
int n;
printf("Enter no. of Discs: ");
scanf("%d",&n);

Tower(n, 'A', 'B', 'C');

    return 0;
}

