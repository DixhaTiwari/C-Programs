#include<stdio.h>
int main()
{
    void India(); 
    India(); 
    return 0;  
}

void India()
{
    printf("You are in India\n");
    void australia();
    australia();
    return;
}


void australia()
{
    printf("You are in australia\n");
    void england();
    england();
    return;
}

void england()
{
    printf("You are in england\n");
    return;
}