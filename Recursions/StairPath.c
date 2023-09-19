/* Stair Path

           _
         _|
       _|
     _| 
   _|
 _|            
 
 Single Step, Double Step 
 
 */ 


#include<stdio.h>

int stair(int n)
{
    if(n==1 || n==2)
    return n;

int TotalWays = stair(n-1) + stair(n-2);
return TotalWays;

}



int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);

int Ways = stair(n);
printf("%d",Ways);
    return 0;
}