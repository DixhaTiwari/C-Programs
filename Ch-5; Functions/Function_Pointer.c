#include<stdio.h>
int sum(int,int);

void main()
{
int s=0;
int(*ptr)(int,int)=&sum; /*without & here and without
* here still it will print */
s=(*ptr)(1,2);
printf("sum=%d\n",s);
}

int sum(int a,int b)
{
    return a+b;
}