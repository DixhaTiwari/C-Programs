//  Print 1 to n

#include<stdio.h>

   void Increasing(int x,int n)
   {
    if(x>n)  
    return;
    printf("%d\n",x);
   Increasing(x+1,n);  //Parameterised way

   return;
}

int main()
{
    int n;
printf("Enter a number:");
scanf("%d",&n);

Increasing(1,n);

    return 0;
}