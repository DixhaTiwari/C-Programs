#include<stdio.h>
#include<string.h>
void main()
/*
{
    int l,i;
    char s1[30],c;
    printf("Enter String:");
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        c=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=c;
    }
    printf("%s",s1);
}*/

{
    int l,i,j;
    char s1[30],c;
    printf("Enter String:");
    gets(s1);
    l=strlen(s1);
   for (i=0,j=l-1;i<j;i++,j--)
   {
    c=s1[i];
    s1[i]=s1[j];
    s1[j]=c;
   }
    printf("%s",s1);
}