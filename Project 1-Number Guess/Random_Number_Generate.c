#include <stdio.h>
int main()
{
int number;
srandom(time(0));
number= random()%100+1; // Generates random number b/w 1 and 100
printf("The number is %d", number);
//Keep running the loop until the number is guessed
    return 0;
}