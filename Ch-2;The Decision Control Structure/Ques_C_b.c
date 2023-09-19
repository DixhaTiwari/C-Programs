#include<stdio.h>
int main()
{
int a,result;
printf("Enter the number:");
scanf("%d",&a);
result=a%2;
if(result==0){
printf("The number is even");}
else{
printf("The number is odd");}
        return 0;
}