#include<stdio.h>
#include<string.h>
int main()

/*{
    char s1[30]="jenny";
    char s2[]="khatri";
    strcat(s1,s2);
    printf("string after contatination: %s\n",s1);
    puts(s2);
}*/

/*{
    int l1,l2,i;
    char s1[30]="jenny";
    char s2[]="khatri";
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("string after contatination: %s\n",s1);
    puts(s2);
}*/

{
    int l1,l2,i;
    char s1[30]="jenny";
    char s2[]="khatri";
    strncat(s1,s2,3);
    printf("string after contatination: %s\n",s1);
    puts(s2);
}