#include <stdio.h>
void fun(int*,int*);
int main()
{
    int i=0;
    i++;
    if(i<=5)
    {
    printf("C adds wings to your thoughts\n");
    exit (0); // It means break the loop
    main();
    }
    return 0;
}
