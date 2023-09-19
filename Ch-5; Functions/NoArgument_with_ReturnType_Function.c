#include<stdio.h>
int sum(void); //Just a declaration

void main() //Main
{
    int s;
s=sum();
printf("sum=%d",s);
}

int sum() //Define
{
int a=5,b=7;
return a+b;
/*return sum,a,b; --> it will return and print b
because in return always the most right element 
is produced 
*/  
} 

