#include<stdio.h>
int main()
{
    char another;
    int num;
    //int mul;
    do
    {
    printf("Enter a number:");
    scanf("%d",&num);
    //mul=num*num;
    printf("square of %d is %d\n",num,num*num);
    printf("Want to enter another number y/n ");
        scanf("%s",&another);

    }while(another == 'y');
    return 0;
}