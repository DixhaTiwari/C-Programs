#include<stdio.h>
int sum(int,int);

void main()
{
    int x,y,c;  //Here in main x and y are arguments
    printf("enter x and y:");
    scanf("%d%d", &x,&y);
    c=sum(x,y);
    printf("sum=%d",c);
}

int sum(int a, int b) //In definition x and y are parameters
{
    //float s=0;
    //s=a+b;
    //printf("sum=%f",s);
    return a+b;
}