#include<stdio.h>
int main()
{
  int Amount,One, Two, Five,Ten,Fifty, Hundred,Total;
  printf("Enter the amount:");
scanf("%d", &Amount);

Hundred=Amount/100;
Amount=Amount%100;
Fifty=Amount/50;
Amount=Amount%50;
Ten=Amount/10;
Amount=Amount%10;
Five=Amount/5;
Amount=Amount%5;
Two=Amount/2;
Amount=Amount%2;
One=Amount/1;
Amount=Amount%1;

Total= One+Two+Five+Ten+Fifty+Hundred;
printf("Smallest no. of notes=%d\n",Total);

  return 0;
}