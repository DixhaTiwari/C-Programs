#include<stdio.h>
int main()
{
    float km,m,cm,ft,inch;
scanf("%f",&km);

m=km*1000;
cm=m*100;
inch=cm/2.54;
ft=inch/12;

printf("Distance in meters=%f\n",m);
printf("Distance in centimeter=%f\n",cm);
printf("Distance in inch=%f\n",inch);
printf("Distance in feet=%f\n",ft);

return 0;

}