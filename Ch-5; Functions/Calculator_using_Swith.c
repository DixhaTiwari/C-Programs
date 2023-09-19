#include<stdio.h>

void add(int a,int b)
{
    printf("addition is: %d\n",a+b);
}
void sub(int a,int b)
{
    printf("substraction is: %d\n",a-b);
}
void mult(int a,int b)
{
    printf("multiplication is: %d\n",a*b);
}
void div(int a,int b)
{
    printf("division is: %d\n",a/b);
}

int main()
{
    int ch,a,b;
    int (*fptr[10])(int,int)=(add,sub,mult,div);

    printf("0 for add\n 
    1 for sub\n 
    2 for mul\n 
    3 for div\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    printf("Enter two numbers:");
    scanf("%d %d",&a&b);

    switch(ch)

    {
        case 0 
        add(a,b); 
        break;
        case 1 
        sub(a,b); 
        break;
        case 2 
        mul(a,b); 
        break;
        case 3 
        div(a,b); 
        break;
        default
        printf("Enter valid choice");
    }
}
