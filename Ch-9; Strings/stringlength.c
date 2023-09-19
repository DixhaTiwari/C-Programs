#include<stdio.h>
#include<string.h>
int main()

/*{
char name[30];
int count=0,i=0;
printf("enter name:");
gets(name);
count=strlen(name);
puts(name);
printf("length of the string=%d",count);
}*/

{
char name[30];
int count=0,i=0;
printf("enter name:");
gets(name);
while(name[i]!='\0')
{
    count++;
    i++;
}
puts(name);
printf("length of the string=%d",count);
}