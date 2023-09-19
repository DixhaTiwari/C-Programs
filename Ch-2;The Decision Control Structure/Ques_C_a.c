#include<stdio.h>
int main()
{
    int cp,sp,p,l;

    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Enter the selling price:");
    scanf("%d",&sp);

    if(sp>cp)
    {
        p=sp-cp;
        printf("The profit is %d",p);
    }
    elseif(sp<cp);
    {
    l=cp-sp;
    printf("The loss is %d",l);
    }

    else
    printf("There is nether profit nor loss");

    return 0;
}