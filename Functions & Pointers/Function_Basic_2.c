#include<stdio.h>
void england()
{
    printf("You are in england\n");
    return;
}
void australia()
{
    printf("You are in australia\n");
    england();
    return;
}
void India()
{
    printf("You are in India\n");
    australia();
    return;
}

int main()
{
    India();  //The function which is called should
    return 0;  // should be at the top from the previous function
}