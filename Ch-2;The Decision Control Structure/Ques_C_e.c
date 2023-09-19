#include<stdio.h>
int main()
{
       int a,b,c,d,e,num,reverse;

       printf("Enter a five digit number:");
       scanf("%d",&num);
//num=12345
       a=num%10;
b=(num/10)%10;
c=(num/100)%10;
d=(num/1000)%10;
e=(num/10000);
reverse=a*10000+b*1000+c*100+d*10+e;

       if(num==reverse){
       printf("The numbers are equal\n",&num,&reverse); }
       else
       {
        printf("The numbers are not equal\n",&num,&reverse);}
        return 0;
}