#include<stdio.h>



void main()
{

char fun(); // inside main or outside main you can declare

    char ch;
    ch=fun();
    printf("ch=%c",ch);


}

char fun()
{
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    return c;
}