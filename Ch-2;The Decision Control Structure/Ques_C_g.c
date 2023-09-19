#include<stdio.h>
int main()
{
int a,b,c,sum;
 
 
 printf("Enter the three angles of triangle:");
 scanf("%d%d%d",&a,&b,&c);
 sum=a+b+c;

 if(sum == 180){
 printf("The triangle is valid");}
 else{
    printf("The triangle is not valid");}
 

              return 0;
}