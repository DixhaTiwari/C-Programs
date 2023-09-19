#include <stdio.h>
int main()
{
int number, guess, nguesses=1;
srandom(time(0));
number= random()%100+1; // Generates random number b/w 1 and 100
//printf("The number is %d\n", number);
//Keep running the loop until the number is guessed
do 
{
   printf("Guess a number between 1 and 100\n");
   scanf("%d",&guess);
   if(guess>number)
   {
    printf("Lower number pls\n");
   }
   else if (guess<number){
    printf("Higher number pls\n");
   }
   else{
    printf("You guessed it in %d attempts\n",nguesses);
   }
   nguesses++;
    }
    while(guess!=number);
    return 0;
}