#include<stdio.h>
int main()
{
int Ram,Shyam,Ajay;

printf("Enter the age of Ram:");
scanf("%d",&Ram);
printf("Enter the age of Shyam :");
scanf("%d",&Shyam);
printf("Enter the age of Ajay :");
scanf("%d",&Ajay);

if (Ram<=Shyam)
{
    if(Ram<=Ajay)
{
printf("Ram is the youngest");
}
else
{
    printf("Shyam is the youngest");
}
}
else if(Ajay<=Shyam)
{
    printf("Ajay is the Youngest");
}
else
{
    printf("Shyam is the youngest");
}
           return 0;
}