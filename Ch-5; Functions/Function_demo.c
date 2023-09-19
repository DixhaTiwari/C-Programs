#include<stdio.h>

// void subtrac()
//{
//}

void sum() //function definition
{
    int a,b,sum;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
}
void main(){ //function calling
sum();
printf("Hello\n");
sum();
sum();
}
