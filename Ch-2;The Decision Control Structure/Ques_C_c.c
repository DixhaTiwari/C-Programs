#include<stdio.h>
int main()
{
int num,result;

printf("Enter the year:");
scanf("%d",&num);
result=num%4;

if(result==0){
    printf("The year is a leap year");
}
else{
    printf("The year is not a leap year");
}

           return 0;
}